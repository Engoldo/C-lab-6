#include "task1.h"
#include <math.h>

int check(int x, int y, int size)
{
	if ((x + (int)pow(3.0, size)/2) >= M || (x - (int)pow(3.0, size)/2) < 0)
		return 1;
	else if ((y + (int)pow(3.0, size)/2) >= M || (y - (int)pow(3.0, size)/2) < 0)
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
		drawFractal(arr, x + (int)pow(3.0, size - 1), y, size - 1);
		drawFractal(arr, x - (int)pow(3.0, size - 1), y, size - 1);
		drawFractal(arr, x, y + (int)pow(3.0, size - 1), size - 1);
		drawFractal(arr, x, y - (int)pow(3.0, size - 1), size - 1);
	}
}
