#include <stdio.h>
#include "task1.h"

int main()
{
	char arr[M][M] = { NULL };
	int size = 3;
	int x = M / 2, y = M / 2;
	/*
	printf("Please enter the size of fractal star[0-3]: ");
	scanf("%d", &size);
	*/
	drawFractal(arr, x, y, size);
	for (int i = 0; i < M; i++) 
	{
		for (int j = 0; j < M; j++)
			printf("%c", arr[i][j]);
		putchar('\n');
	}

	return 0;
}