#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <SDL2/SDL.h>
#include "./constants.h"

int game_is_running = FALSE;
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

int last_frame_time = 0;

struct ball {
	float x;
	float y;
	float width;
	float height;
	int speed_x;
	int speed_y;
} ball;

struct paddle {
	float x;
	float y;
	float height;
	float speed;
} p1, p2;

int initialize_window(void) {
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		fprintf(stderr, "Error intializing SDL.\n");
		return FALSE;
	}

	window = SDL_CreateWindow(
		NULL,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_BORDERLESS
	);

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

	switch(event.type) {
		case SDL_QUIT:
			game_is_running = FALSE;
			break;
		case SDL_KEYDOWN:
			if (event.key.keysym.sym == SDLK_ESCAPE) {
				game_is_running = FALSE;
			} else if (event.key.keysym.sym == SDLK_w) {
				if (p1.y >= 0 + 1) {
					p1.y -= 1 * p1.speed;
				}
			} else if (event.key.keysym.sym == SDLK_s) {
				if (p1.y <= (WINDOW_HEIGHT - p1.height - 1)) {
					p1.y += 1 * p1.speed;
				}
			}
			break;
	}
}

void setup() {
	ball.x = WINDOW_WIDTH + 10;
	ball.y = WINDOW_HEIGHT - 10;
	ball.width = 15;
	ball.height = 15;

	ball.speed_x = 2;
	ball.speed_y = 2;

	// random start
	srand(time(0));
	int gen_x = rand() % 2;

	if (gen_x == 1) {
		ball.speed_x *= -1;
	}

	srand(time(0));
	int gen_y = rand() % 2;

	if (gen_y == 1) {
		ball.speed_y *= -1;
	}

	p1.x = 10;
	p1.y = WINDOW_HEIGHT / 2;
	p1.height = WINDOW_HEIGHT / 4;	
	p1.speed = 10;

	p2.x = WINDOW_WIDTH -3;
	p2.y = WINDOW_HEIGHT / 2;
	p2.height = 50;	
}

void update() {
	float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;
	last_frame_time = SDL_GetTicks();

	if (ball.y <= 0 || ball.y >= WINDOW_HEIGHT - ball.height) {
		ball.speed_y *= -1;
	}

	if (ball.x >= WINDOW_WIDTH - ball.width || ball.x <= 0) {
		// TODO: points
		ball.x = WINDOW_WIDTH / 2;
		ball.y = WINDOW_HEIGHT / 2;
	}

	ball.x += 50 * delta_time * ball.speed_x;
	ball.y += 50 * delta_time * ball.speed_y;

}

void render() {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	SDL_Rect ball_rect = {
		(int)ball.x,
		(int)ball.y,
		(int)ball.width,
		(int)ball.height 
	};

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderFillRect(renderer, &ball_rect);

	SDL_Rect p1_rect = {
		(int)p1.x,
		(int)p1.y,
		20,
		(int)p1.height
	};

	SDL_RenderFillRect(renderer, &p1_rect);

	SDL_RenderPresent(renderer);
}

void destroy_window() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

int main() {
	game_is_running = initialize_window();

	setup();

	while (game_is_running) {
		process_input();
		update();
		render();
	}

	destroy_window();

	return 0;	
}
