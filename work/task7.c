#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#include "task7.h"

void place(int x, int y)
{
	clock_t now;
	now = clock();
	while (clock() <= now + CLOCKS_PER_SEC );

	if (x == 0 || y == 0 || x == N - 1 || y == M - 1)
	{
		buf[y][x] = 'x';
		printway();
		return;
	}
	printway();
	if (buf[y - 1][x] == ' ')
	{
		buf[y - 1][x] = '.';
		place(x, y - 1);
		if (buf[y - 1][x] == 'x')
		{
			buf[y][x] = 'x';
			return;
		}
		buf[y - 1][x] = ' ';
	}
	if (buf[y][x + 1] == ' ')
	{
		buf[y][x + 1] = '.';
		place(x + 1, y);
		if (buf[y][x + 1] == 'x')
		{
			buf[y][x] = 'x';
			return;
		}
		buf[y][x + 1] = ' ';
	}
	if (buf[y + 1][x] == ' ')
	{
		buf[y + 1][x] = '.';
		place(x, y + 1);
		if (buf[y + 1][x] == 'x')
		{
			buf[y][x] = 'x';
			return;
		}
		buf[y + 1][x] = ' ';
	}
	if (buf[y][x - 1] == ' ')
	{
		buf[y][x - 1] = '.';
		place(x - 1, y);
		if (buf[y][x - 1] == 'x')
		{
			buf[y][x] = 'x';
			return;
		}
		buf[y][x - 1] = ' ';
	}
	
}

void printway()
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%c", buf[i][j]);
		}
		printf("\n");
	}
}