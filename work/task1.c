#include <stdio.h>
#include <string.h>
#include "task1.h"

int myPow(int x, int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else
	{
		int curr = 1;
		for (int i = 1; i <= y; i++)
			curr *= x;
		return curr;
	}
}

void drawFractal(char(*arr)[N1], int x, int y, int size)
{
	if (size == 0)
	{
		arr[y][x] = '*';
	}
	else
	{
		int shift = myPow(3, size - 1);
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x, y + shift, size - 1);
		drawFractal(arr, x, y - shift, size - 1);
		drawFractal(arr, x + shift, y, size - 1);
		drawFractal(arr, x - shift, y, size - 1);
	}
}

void printMatrix(char(*arr)[N1])
{
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < N1; j++)
			putchar(arr[i][j]);
		if (i != (N1 - 1))
			putchar('\n');
	}
}