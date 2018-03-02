/*
Написать программу, которая формирует в двумерном символьном
массиве фрактальное изображение и выводит его на консоль.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"

int main()
{
	int x = N1 / 2, y = N1 / 2, size = 3;
	char arr[N1][N1] = { '\0' };
	printf("Enter x, y, size: ");
	scanf("%d, %d, %d", &x, &y, &size);
	drawFractal(arr, x, y, size);
	printMatrix(arr);
	return 0;
}
