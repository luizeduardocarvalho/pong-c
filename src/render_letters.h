#include "point.h"

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
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point B[] = {{0 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

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
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

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
                      {3 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

  struct point O[] = {{1 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 0 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 1 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 2 * LETTER_HEIGHT},
                      {0 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {3 * LETTER_WIDTH, 3 * LETTER_HEIGHT},
                      {1 * LETTER_WIDTH, 4 * LETTER_HEIGHT},
                      {2 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

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
                      {0 * LETTER_WIDTH, 4 * LETTER_HEIGHT}};

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
}
