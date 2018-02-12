#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "task7.h"

extern char arr[N][M];

int main()
{
	int rowNum = 0;
	char strIn[M + 2] = { '\0' };
	FILE *fpIn = fopen("laby.txt", "r");
	if (fpIn == NULL)
		puts("File error!");

	while (fgets(strIn, M + 2, fpIn) != NULL)
	{
		if (strIn[strlen(strIn) - 1] == '\n')
			strIn[strlen(strIn) - 1] = '\0';
		for (int i = 0; i < M; i++)
			arr[rowNum][i] = strIn[i];
		rowNum++;
	};

	place((int)(M/2), (int)(N/2));
	printMatrix();

	fclose(fpIn);
	return 0;
}
