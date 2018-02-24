#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task7.h"

int main()
{
	char labCell;
	int x, y;
	x = 6;
	y = 14;

	FILE *fp = fopen("labyrinth.txt", "rt");
	if (fp == NULL)
	{
		printf("File not found!\n");
		return 1;
	}
	
	for (int i = 0; i < LAB_X; i++)
	{
		fgets(labExit[i], LAB_Y+2, fp);
	}

	labExit[x][y] = 'X';

	printf("Labyrinth. The beginning:\n");
	printLab();

	place(x, y);
	printf("Labyrinth. The end:\n");
	printLab();

	fclose(fp);

	return 0;
}