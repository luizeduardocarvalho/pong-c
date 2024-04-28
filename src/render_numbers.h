#include <SDL2/SDL.h>
#include <string.h>

#define NUMBER_WIDTH 5
#define NUMBER_HEIGHT 5

struct point {
  int x;
  int y;
};

struct numbers {
  struct point points[15];
};

struct numbers numbers[10];

void setup_numbers() {
  struct point number_zero[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1}};

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

  struct point number_two[] = {{0, 0},
                               {1 * NUMBER_WIDTH, 0},
                               {2 * NUMBER_WIDTH, 0},
                               {2 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                               {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                               {1 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                               {0, 2 * NUMBER_HEIGHT},
                               {0, 3 * NUMBER_HEIGHT},
                               {0, 4 * NUMBER_HEIGHT},
                               {1 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                               {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1}};

  struct point number_three[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {1 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                 {0 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                 {1 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                 {0 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                 {1 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1}};

  struct point number_four[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1}};

  struct point number_five[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1}};

  struct point number_six[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                               {0 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                               {0 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                               {0 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                               {0 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                               {1 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                               {1 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                               {1 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                               {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                               {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                               {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                               {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                               {-1, -1},
                               {-1, -1},
                               {-1, -1}};

  struct point number_seven[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {1 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1},
                                 {-1, -1}};

  struct point number_eight[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {0 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                 {0 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                 {0 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                 {0 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                 {1 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {1 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                 {1 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                 {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                 {-1, -1},
                                 {-1, -1}};

  struct point number_nine[] = {{0 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 0 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 1 * NUMBER_HEIGHT},
                                {0 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {1 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 2 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 3 * NUMBER_HEIGHT},
                                {2 * NUMBER_WIDTH, 4 * NUMBER_HEIGHT},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1},
                                {-1, -1}};

  memcpy(&numbers[0].points, &number_zero, sizeof number_one);
  memcpy(&numbers[1].points, &number_one, sizeof number_one);
  memcpy(&numbers[2].points, &number_two, sizeof number_one);
  memcpy(&numbers[3].points, &number_three, sizeof number_one);
  memcpy(&numbers[4].points, &number_four, sizeof number_one);
  memcpy(&numbers[5].points, &number_five, sizeof number_one);
  memcpy(&numbers[6].points, &number_six, sizeof number_one);
  memcpy(&numbers[7].points, &number_seven, sizeof number_one);
  memcpy(&numbers[8].points, &number_eight, sizeof number_one);
  memcpy(&numbers[9].points, &number_nine, sizeof number_one);
}

void render_points(int number, int x, int y, SDL_Renderer *renderer) {
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

  for (int i = 0; i < 13; i++) {
    if (numbers[number].points[i].x == -1) {
      continue;
    }

    SDL_Rect number_rect = {numbers[number].points[i].x + x,
                            numbers[number].points[i].y + y, NUMBER_WIDTH,
                            NUMBER_HEIGHT};

    SDL_RenderFillRect(renderer, &number_rect);
  }
}
