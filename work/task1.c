#include <stdio.h>
#include "task1.h"

int exp(int num, int degree)							//exponentiation of number
{
	if (degree == 0) 
		return 1;
	return num * exp(num, degree - 1);
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
	{
		arr[x][y] = MARK;
	}
	else 
	{
		int starSize = exp(3, size - 1);
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + starSize, y, size - 1);
		drawFractal(arr, x - starSize, y, size - 1);
		drawFractal(arr, x, y + starSize, size - 1);
		drawFractal(arr, x, y - starSize, size - 1);
	}
}