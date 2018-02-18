#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>
#include <time.h>

int main()
{
	ULL numberFib;
	FILE *fp;
	clock_t t1, t2;

	fp = fopen("fib.xls", "wt");
	if (fp == NULL)
	{
		printf("Error! File was not open!");
		return 1;
	}
	fprintf(stdout, "Time:\tNumber:\tFibonachi:\n");
	for (int i = 1; i <= 100; i++)
	{
		t1 = clock();
		numberFib = fib2(i);
		t2 = clock();
		fprintf(stdout, "%d\t%d\t%lu\n", (t2 - t1) / 1000, i,numberFib);
		fprintf(fp, "%d\t%lu\n", (t2 - t1) / 1000, i);
	}
	fclose(fp);
	return 0;

}