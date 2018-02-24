#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task5.h"

int main()
{
	unsigned long long fibNum = 0;
	clock_t start, end;
	FILE *fp;

	fp = fopen("fib.xls", "wt");
	if (fp == NULL)
	{
		printf("File not found!\n");
		return 1;
	}

	for (int i = 1; i <= MAXFIB; i++)
	{
		start = clock();
		fibNum = fib1(i);
		end = clock();
		double sec = (double)(end - start) / CLOCKS_PER_SEC;
		printf("%d\t%f sec\n", i, sec);
		fprintf(fp, "%d\t%f\n", i, sec);
	}

	fclose(fp);

	return 0;
}