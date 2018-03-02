#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task6.h"

int main()
{
	unsigned long long fibNum = 0;
	clock_t start, end;

	for (int i = 1; i <= MAXFIB; i++)
	{
		start = clock();
		fibNum = fib2(i);
		end = clock();
		double sec = (double)(end - start) / CLOCKS_PER_SEC;
		printf("%d\t%f sec\n", i, sec);
	}

	return 0;
}