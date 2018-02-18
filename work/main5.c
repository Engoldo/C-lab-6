#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <stdio.h>
#include <time.h>

int main()
{
	long long numberFib;
	FILE *fp;
	clock_t t1, t2;

	fp = fopen("fib.xls", "wt");
	if (fp == NULL)
	{
		printf("Error! File was not open!");
		return 1;
	}
	for (int i = 1; i <= 41; i++)
	{
		t1 = clock();
		numberFib = fib1(i);
		t2 = clock();
		fprintf(stdout, "%d\t%d\n", (t2-t1)/1000, i);
		fprintf(fp, "%d\t%lu\n",(t2-t1)/1000, i);
	}
	fclose(fp);
	return 0;
	
}