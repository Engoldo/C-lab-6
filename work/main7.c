#include "task7.h"

int main()
{
	int i = 0, j = 0;
	char ch;
	FILE *fp = fopen("maze.txt", "rt");
	 
	if (fp == NULL)
	{
		puts("404! File not found!\n");
		return 1;
	}
	
	for (i = 0; i < Y; i++)
	{
		for (j = 0; j <= X; j++)
		{
			ch = fgetc(fp);
			if (ch != '\n' && ch != EOF)
				maze[i][j] = ch;
			else
				break;
		}
	}

	place(START_X, START_Y);
	fclose(fp);

	return 0;
}

