#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "task7.h"
#define X 14
#define Y 4



int main()
{
	int i = 0, j = 0;
	char ch;
	FILE *fp = fopen("labirint.txt", "rt");
	if (fp==NULL )
	{
		printf("File is not reading!\n");
			return 1;
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= M; j++)
		{
			ch = fgetc(fp);
			if (ch != '\n' && ch != EOF)
				arr[i][j] = ch;
			else
				break;
		}
	}
	
	place(X,Y);

	fclose(fp);
	return 0;
}