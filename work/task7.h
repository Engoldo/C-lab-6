#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define X 31
#define Y 11
#define START_X 12
#define START_Y 4

char maze[Y][X];

void place(int x, int y);
void printWay();