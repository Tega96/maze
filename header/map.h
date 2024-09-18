#ifndef MAP_H_
#define MAP_H_

#include <stdbool.h>
#include "main.h"
#include "graphics.h"

#define MAP_NUM_ROWS 14
#define MAP_NUM_COLS 20

bool mapHasWallAt(float x, float y);
bool isInsideMap(float x, float y);
void renderMapGrid(void);
int getMapAt(int i, int j);

#endif /* MAP_H_ */
