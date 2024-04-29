#ifndef RENDER_LETTERS_H
#define RENDER_LETTERS_H

#include "point.h"
#include <SDL2/SDL.h>
#include <string.h>

#define LETTER_HEIGHT 5
#define LETTER_WIDTH 5

struct letters {
  struct point points[15];
};

struct letters letters[26];

void setup_letters() {
  struct point A[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1}};

  struct point B[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1}};

  struct point C[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point D[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point E[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point F[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point G[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1}};

  struct point H[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point I[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point J[] = {{2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point K[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point L[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point M[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point N[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1}};

  struct point O[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1}};

  struct point P[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {-1, -1},
                      {-1, -1},
                      {-1, -1}};

  struct point Q[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point R[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point S[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point T[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point U[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point V[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT}};

  struct point W[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point X[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT}};

  struct point Y[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT}};

  struct point Z[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  // TODO: fix this part
  memcpy(&letters[0].points, &A, sizeof A);
  memcpy(&letters[1].points, &B, sizeof B);
  memcpy(&letters[2].points, &C, sizeof C);
  memcpy(&letters[3].points, &D, sizeof D);
  memcpy(&letters[4].points, &E, sizeof E);
  memcpy(&letters[5].points, &F, sizeof F);
  memcpy(&letters[6].points, &G, sizeof G);
  memcpy(&letters[7].points, &H, sizeof H);
  memcpy(&letters[8].points, &I, sizeof I);
  memcpy(&letters[9].points, &J, sizeof J);
  memcpy(&letters[10].points, &K, sizeof K);
  memcpy(&letters[11].points, &L, sizeof L);
  memcpy(&letters[12].points, &M, sizeof M);
  memcpy(&letters[13].points, &N, sizeof N);
  memcpy(&letters[14].points, &O, sizeof O);
  memcpy(&letters[15].points, &P, sizeof P);
  memcpy(&letters[16].points, &Q, sizeof Q);
  memcpy(&letters[17].points, &R, sizeof R);
  memcpy(&letters[18].points, &S, sizeof S);
  memcpy(&letters[19].points, &T, sizeof T);
  memcpy(&letters[20].points, &U, sizeof U);
  memcpy(&letters[21].points, &V, sizeof V);
  memcpy(&letters[22].points, &W, sizeof W);
  memcpy(&letters[23].points, &X, sizeof X);
  memcpy(&letters[24].points, &Y, sizeof Y);
  memcpy(&letters[25].points, &Z, sizeof Z);
}

// TODO: Create a generic method to print letters and numbers
void render_letters(char letter, int x, int y, SDL_Renderer *renderer) {
  const char *const alphabet = "abcdefghijklmnopqrstuvwxyz";
  char *p = strchr(alphabet, (unsigned char)letter);
  int n = p - alphabet;

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

  for (int i = 0; i < 15; i++) {
    if (letters[n].points[i].x == -1) {
      continue;
    }

    SDL_Rect letter_rect = {letters[n].points[i].x + x,
                            letters[n].points[i].y + y, LETTER_WIDTH,
                            LETTER_HEIGHT};

    SDL_RenderFillRect(renderer, &letter_rect);
  }
}

#endif
