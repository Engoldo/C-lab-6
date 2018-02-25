#include <stdio.h>
#include <stdlib.h>
#include "task1.h"


int main()
{
	char arr[100][100] = { 0 };
	int x = 1, y = 0, k = 0, size = 0;
	printf("Enter size: ");
	scanf("%d", &k);
	for (; k > 0; k--)
		x  = x * 3;
	size = x;
	x = y = x / 2;
	drawFractal(arr, x, y, size / 3);
	for (y = 0; y < 99; y++) 
		{
		for (x = 0; x < 99; x++)
			printf("%c", arr[y][x]);
		printf("\n");
		}
	return 0;

}