#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "task7.h"

extern char arr[N7][M7];

int main()
{
	int rowNum = 0;
	char strIn[M7 + 2] = { '\0' };
	FILE *fpIn = fopen("laby.txt", "r");
	if (fpIn == NULL)
		puts("File error!");

	while (fgets(strIn, M7 + 2, fpIn) != NULL)
	{
		if (strIn[strlen(strIn) - 1] == '\n')
			strIn[strlen(strIn) - 1] = '\0';
		for (int i = 0; i < M7; i++)
			arr[rowNum][i] = strIn[i];
		rowNum++;
	};

	place((int)(M7/2), (int)(N7/2));
	printMatrix();

	fclose(fpIn);
	return 0;
}
