#include "task1.h"

//new pow function for drawing fractal
//for travis compile, in all other cases u can use pow(x,y) function

int newPow(int degree)
{
	if (degree == 0)
		return 1;
	return 3 * newPow(degree - 1);
}


void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
	{
		arr[x][y] = '*';
	}
	else
	{
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + newPow(size - 1), y, size - 1);
		drawFractal(arr, x - newPow(size - 1), y, size - 1);
		drawFractal(arr, x, y + newPow(size - 1), size - 1);
		drawFractal(arr, x, y - newPow(size - 1), size - 1);
	}
}