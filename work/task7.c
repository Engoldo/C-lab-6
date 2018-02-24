#include <stdio.h>
#include "task7.h"

void printLab()
{
	for (int i = 0; i < LAB_X; i++)
	{
		for (int j = 0; j < LAB_Y; j++)
		{
			putchar(labExit[i][j]);
		}
		putchar('\n');
	}
}

void place(int x, int y)
{
	if (x >= LAB_X || x == 0 || y >= LAB_Y || y == 0) //borders of the labyrinth
	{
		labExit[x][y] = 'X';
		return;
	}
	else
	{
		labExit[x][y] = WAY;

		if (labExit[x - 1][y] == ' ') //north check 		
			place(x - 1, y);			

		if (labExit[x][y + 1] == ' ') //east check
			place(x, y + 1);

		if (labExit[x + 1][y] == ' ') //south check
			place(x + 1, y);

		if (labExit[x][y - 1] == ' ') //west check
			place(x, y - 1);
	}
}