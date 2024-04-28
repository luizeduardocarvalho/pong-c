#include <SDL2/SDL.h>
#include <string.h>

#define NUMBER_WIDTH 5
#define NUMBER_HEIGHT 5

struct point {
  int x;
  int y;
};

struct numbers {
  struct point points[13];
};

struct numbers numbers[9];

void setup_numbers() {
  struct point number_one[] = {{0, 0},
                               {0, 1 * NUMBER_HEIGHT},
                               {0, 2 * NUMBER_HEIGHT},
                               {0, 3 * NUMBER_HEIGHT},
                               {0, 4 * NUMBER_HEIGHT},
                               {0, 5 * NUMBER_HEIGHT},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1}};

  memcpy(&numbers[0].points, &number_one, sizeof number_one);
}

void render_points(int number, int x, int y, SDL_Renderer *renderer) {
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

  for (int i = 0; i < 13; i++) {
    if (numbers[number - 1].points[i].x == -1) {
      continue;
    }

    SDL_Rect number_rect = {numbers[number - 1].points[i].x + x,
                            numbers[number - 1].points[i].y + y, NUMBER_WIDTH,
                            NUMBER_HEIGHT};

    SDL_RenderFillRect(renderer, &number_rect);
  }
}
