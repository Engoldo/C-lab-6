#include "task1.h"
//#include <math.h>

int pow3(int deg)
{
	if (deg == 0)
		return 1;
	return 3 * pow3(deg-1);
}

int check(int x, int y, int size)
{
	if ((x + pow3(size) / 2) >= M || (x - pow3(size) / 2) < 0)
		return 1;
	else if ((y + pow3(size) / 2) >= M || (y - pow3(size) / 2) < 0)
		return 1;
	else
		return 0;
}


void drawFractal(char(*arr)[M], int x, int y, int size)
{		
	if (size == 0)
	{
		arr[y][x] = '*';
	}
	else
	{
		drawFractal(arr, x , y,size - 1);
		drawFractal(arr, x + pow3(size-1), y, size - 1);
		drawFractal(arr, x - pow3(size - 1), y, size - 1);
		drawFractal(arr, x, y + pow3(size - 1), size - 1);
		drawFractal(arr, x, y - pow3(size-1), size - 1);
	}
}
