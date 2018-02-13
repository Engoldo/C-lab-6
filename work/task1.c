#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "task1.h"

void drawFractal(char (*arr)[N1], int x, int y, int size)
{
	if (size == 0)
	{
		arr[y][x] = '*';
	}
	else
	{
		int shift = pow(3.0, (double)(size - 1));
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x, y + shift, size - 1);
		drawFractal(arr, x, y - shift, size - 1);
		drawFractal(arr, x + shift, y, size - 1);
		drawFractal(arr, x - shift, y, size - 1);
	}
}

void printMatrix(char (*arr)[N1])
{
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < N1; j++)
			putchar(arr[i][j]);
		if (i != (N1 - 1))
			putchar('\n');
	}
}