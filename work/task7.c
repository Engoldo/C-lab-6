#include "task7.h"

void printWay()
{
	system("cls");
	int i = 0, j = 0;
	for (i = 0; i < Y; i++)
	{
		for (j = 0; j < X; j++)
			printf("%c", maze[i][j]);
		printf("\n");
	}
	clock_t now = clock();
	while (clock() < now + 100);
}

void place(int x, int y)
{
	if (y >= Y || x >= X || y <= 0 || x <= 0)  
	{
		maze[y][x] = 'X';
		printWay();
		return;
	}

	else
	{
		maze[y][x] = '.';

		if (maze[y][x + 1] == ' ')
		{
			printWay();
			place(x + 1, y);
		}

		if (maze[y + 1][x] == ' ')
		{
			printWay();
			place(x, y + 1);
		}

		if (maze[y][x - 1] == ' ')
		{
			printWay();
			place(x - 1, y);
		}

		if (maze[y - 1][x] == ' ')
		{
			printWay();
			place(x, y - 1);
		}
	}
}