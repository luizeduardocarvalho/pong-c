#include "./constants.h"
#include "./render_letters.h"
#include "./render_numbers.h"
#include "SDL2/SDL_render.h"
#include <SDL2/SDL.h>
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int game_is_running = FALSE;
int is_menu = TRUE;
SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
sqlite3 *db = NULL;

int last_frame_time = 0;

struct ball {
  float x;
  float y;
  float width;
  float height;
  int speed_x;
  int speed_x_direction;
  int speed_y;
  int speed_y_direction;
} ball;

struct paddle {
  float x;
  float y;
  float height;
  float width;
  float speed;
  int speed_direction;
} p1, p2;

struct score {
  int p1;
  int p2;
} score;

int initialize_window(void) {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    fprintf(stderr, "Error intializing SDL.\n");
    return FALSE;
  }

  window =
      SDL_CreateWindow(NULL, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                       WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_BORDERLESS);

  if (!window) {
    fprintf(stderr, "Error creating SDL window.\n");
    return FALSE;
  }

  renderer = SDL_CreateRenderer(window, -1, 0);

  if (!renderer) {
    fprintf(stderr, "Error creating SDL renderer.\n");
    return FALSE;
  }

  return TRUE;
}

void process_input() {
  SDL_Event event;
  SDL_PollEvent(&event);

  switch (event.type) {
  case SDL_QUIT:
    game_is_running = FALSE;
    break;
  case SDL_KEYDOWN:
    if (event.key.keysym.sym == SDLK_ESCAPE) {
      game_is_running = FALSE;
    } else if (event.key.keysym.sym == SDLK_w) {
      if (p1.y >= 0 + 1) {
        p1.speed_direction = UP;
        p1.y += 1 * p1.speed * p1.speed_direction;
      }
    } else if (event.key.keysym.sym == SDLK_s) {
      if (p1.y <= (WINDOW_HEIGHT - p1.height - 1)) {
        p1.speed_direction = DOWN;
        p1.y += 1 * p1.speed * p1.speed_direction;
      }
    }
    break;
  }
}

void process_menu_input() {
  SDL_Event event;
  SDL_PollEvent(&event);

  switch (event.type) {
  case SDL_KEYDOWN:
    if (event.key.keysym.sym == SDLK_ESCAPE) {
      game_is_running = FALSE;
    } else if (event.key.keysym.sym == SDLK_w) {
    } else if (event.key.keysym.sym == SDLK_s) {
    }
    break;
  }
}

void setup() {
  setup_numbers();
  setup_letters();

  score.p1 = 0;
  score.p2 = 0;

  ball.width = 15;
  ball.height = 15;
  ball.x = (int)(WINDOW_WIDTH / 2) - (int)(ball.width / 2);
  ball.y = (int)(WINDOW_HEIGHT / 2) - (int)(ball.height / 2);

  ball.speed_x = 5;
  ball.speed_y = 5;
  ball.speed_x_direction = LEFT;
  ball.speed_y_direction = UP;

  // random start
  // srand(time(0));
  // int gen_x = rand() % 2;
  //
  // if (gen_x == 1) {
  // 	ball.speed_x *= -1;
  // }

  // srand(time(0));
  // int gen_y = rand() % 2;
  //
  // if (gen_y == 1) {
  // 	ball.speed_y_direction = UP;
  // }

  p1.x = 10;
  p1.y = WINDOW_HEIGHT / 2;
  p1.height = WINDOW_HEIGHT / 4;
  p1.width = 20;
  p1.speed = 15;

  p2.height = WINDOW_HEIGHT / 4;
  p2.width = 20;
  p2.x = WINDOW_WIDTH - 10 - p2.width;
  p2.y = WINDOW_HEIGHT / 2;
  p2.speed = 2.5;
}

void update() {
  float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;
  last_frame_time = SDL_GetTicks();

  // ball redirection when hitting walls
  if (ball.y >= WINDOW_HEIGHT - ball.height) {
    ball.speed_y_direction = UP;
  }

  if (ball.y <= 0) {
    ball.speed_y_direction = DOWN;
  }

  // ball redirection when hitting paddles
  if ((ball.x <= p1.x + 1 + p1.width && ball.x >= p1.x) &&
      ball.y + ball.height >= p1.y - 1 && ball.y <= p1.y + p1.height - 1) {
    if ((p1.speed_direction == UP && ball.speed_y_direction == DOWN) ||
        (p1.speed_direction == DOWN && ball.speed_y_direction == UP)) {
      ball.speed_y_direction *= -1;
    }
    ball.speed_x_direction = RIGHT;
  }

  if ((ball.x >= p2.x - ball.width && ball.x <= p2.x + p2.width) &&
      ball.y + ball.height >= p2.y + 1 && ball.y <= p2.y + p2.height - 1) {
    if ((p2.speed > 0 && ball.speed_y < 0) ||
        (p2.speed < 0 && ball.speed_y > 0)) {
      ball.speed_y_direction *= -1;
    }
    ball.speed_x_direction = LEFT;
  }

  // points
  if (ball.x >= WINDOW_WIDTH - ball.width - 2) {
    score.p1++;
    ball.x = (int)(WINDOW_WIDTH / 2);
    ball.y = (int)(WINDOW_HEIGHT / 2);
  }

  if (ball.x <= 2) {
    score.p2++;
    ball.x = (int)(WINDOW_WIDTH / 2);
    ball.y = (int)(WINDOW_HEIGHT / 2);
  }

  if (score.p1 > 9 || score.p2 > 9) {
    game_is_running = FALSE;
  }

  // ball movement
  ball.x += 50 * delta_time * ball.speed_x * ball.speed_x_direction;
  ball.y += 50 * delta_time * ball.speed_y * ball.speed_y_direction;

  // p2 paddle movement
  if (ball.speed_x_direction == RIGHT) {
    if (ball.speed_y_direction == UP && p2.y >= 0) {
      p2.speed_direction = UP;
      p2.y += 50 * p2.speed * p2.speed_direction * delta_time;
    }

    if (ball.speed_y_direction == DOWN && p2.y + p2.height <= WINDOW_HEIGHT) {
      p2.speed_direction = DOWN;
      p2.y += 50 * p2.speed * p2.speed_direction * delta_time;
    }
  }
}

void render_menu() {
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);

  char title[] = {'p', 'o', 'n', 'g', '\0'};

  for (int i = 0; i < title[i] != '\0'; i++) {
    render_letters(title[i], (WINDOW_WIDTH / 2 - 40) + i * 20,
                   WINDOW_HEIGHT / 2, renderer);
  }

  SDL_RenderPresent(renderer);
}

void render() {
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);

  SDL_Rect ball_rect = {(int)ball.x, (int)ball.y, (int)ball.width,
                        (int)ball.height};

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderFillRect(renderer, &ball_rect);

  SDL_Rect p1_rect = {(int)p1.x, (int)p1.y, (int)p1.width, (int)p1.height};
  SDL_RenderFillRect(renderer, &p1_rect);

  SDL_Rect p2_rect = {(int)p2.x, (int)p2.y, (int)p2.width, (int)p2.height};
  SDL_RenderFillRect(renderer, &p2_rect);

  // render score
  render_points(score.p1, (int)(WINDOW_WIDTH / 2) - 50, 25, renderer);
  render_points(score.p2, (int)(WINDOW_WIDTH / 2) + 50, 25, renderer);
  SDL_Rect dash = {(WINDOW_WIDTH / 2), 34, 10, 5};
  SDL_RenderFillRect(renderer, &dash);

  SDL_RenderPresent(renderer);
}

void destroy_window() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

int main() {
  game_is_running = initialize_window();

  // int rc = sqlite3_open("game.db", &db);
  //
  // if (rc != SQLITE_OK) {
  // 	fprintf(stderr, "Cannot open databse: %s\n", sqlite3_errmsg(db));
  // 	sqlite3_close(db);
  //
  // 	return 1;
  // }

  setup();
  sleep(2);

  while (is_menu && game_is_running) {
    render_menu();
    process_menu_input();
  }

  render();
  while (game_is_running) {
    process_input();
    update();
    render();
  }

  destroy_window();

  return 0;
}
