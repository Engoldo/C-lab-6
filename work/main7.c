#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "task7.h"

#define CENTR_Y 4
#define CENTR_X 5

int main()
{
	char ch = 0;
	int i = 0, j = 0;
	FILE *fp;
	fp = fopen("buf.txt", "rt");
		if (!fp)
		{
			perror("File:");
			return 1;
		}

	for (i = 0; i < M; i++)
	{
		for (j = 0; j <= N; j++)
		{
			fscanf(fp, "%c", &ch);
			if (ch != '\n')
				buf[i][j] = ch;
		}
	}

	place(CENTR_X, CENTR_Y);

	/*for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%c", buf[i][j]);
		}
		printf("\n");
	}*/
	return 0;
}

