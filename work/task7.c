#include "task7.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr()
{
	//system("cls");
	int i = 0, j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			printf("%c", arr[i][j]);
		printf("\n");
	}
    clock_t now = clock();
	while (clock() < now + 500);
}



void place(int x, int y)
{
	if (y >= N || y <= 0 || x >= M || x <= 0)
	{
		arr[y][x] = 'X';
		printArr();
		return;
	}
		
	else
	{
		arr[y][x] = '.';
		if (arr[y][x+1]==' ')
		{
//			printArr();
			place(x + 1, y);
//			arr[y][x] = ' ';
		}
		if (arr[y + 1][x] == ' ')
		{
//			printArr();
			place(x, y + 1);
//			arr[y][x] = ' ';
		}
		if (arr[y][x - 1] == ' ')
		{
//			printArr();
			place(x - 1, y);
//			arr[y][x] = ' ';
		}
		if (arr[y - 1][x] == ' ')
		{
//			printArr();
			place(x, y-1);
//			arr[y][x] = ' ';
		}
	}
}