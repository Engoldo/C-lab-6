#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"

int main()
{
	int x = N / 2, y = N / 2, size = 3;
	char arr[N][N] = { '\0' };
	printf("Enter x, y, size: ");
	scanf("%d, %d, %d", &x, &y, &size);
	drawFractal(arr, x, y, size);
	printMatrix(arr);
	return 0;
}

