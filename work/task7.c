#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task7.h"

char arr[N][M];

int isOutBord(int x, int y)
{
	int xTrue = (x >= 0) && (x < M);
	int yTrue = (y >= 0) && (y < N);
	int case1 = (x == 0) && yTrue;
	int case2 = (x == M - 1) && yTrue;
	int case3 = (y == 0) && xTrue;
	int case4 = (y == N - 1) && xTrue;
	return case1 || case2 || case3 || case4;
}

int isFreePass(int x, int y)
{
	int xTrue = (x >= 0) && (x < M);
	int yTrue = (y >= 0) && (y < N);
	int isFree = arr[y][x] == SYM_GATE;
	return xTrue && yTrue && isFree;
}

void place(int x, int y)
{   
	static int deadlock;
	
	if (isOutBord(x, y) && arr[y][x] == SYM_GATE)
	{
		arr[y][x] = SYM_TR;
		printMatrix();
		deadlock = 2;
		return;
	}
	else
	{
		arr[y][x] = SYM_TR;
		printMatrix();
		int isExistFreePass = 0;

		if (isFreePass(x, y - 1) && (deadlock != 2))
		{
			isExistFreePass = 1;
			deadlock = 0;
			place(x, y - 1);
		}

		if (isFreePass(x - 1, y) && (deadlock != 2))
		{
			isExistFreePass = 1;
			deadlock = 0;
			place(x - 1, y);
		}

		if (isFreePass(x, y + 1) && (deadlock != 2))
		{
			isExistFreePass = 1;
			deadlock = 0;
			place(x, y + 1);
		}

		if (isFreePass(x + 1, y) && (deadlock != 2))
		{
			isExistFreePass = 1;
			deadlock = 0;
			place(x + 1, y);
		}

		if ((isExistFreePass == 0) || (deadlock == 1)  && (deadlock != 2))
		{
			deadlock = 1;
			return;
		}
	}
}

void printMatrix(void)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			putchar(arr[i][j]);
		if (i != (N - 1))
			putchar('\n');
	}
	puts("\n\n\n");
}