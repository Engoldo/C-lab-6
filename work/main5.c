#include "task5.h"

int main()
{
	int result = 0, i = 1;
	clock_t t1, t2, runtime;
	FILE* fp = fopen("fibonacci.csv", "wt");

	if (fp == NULL)
	{
		printf("404! File not found!\n");
		return 1;
	}

	for (i = 1; i <= 40; i++)
	{
		t1 = clock();
		result = fib1(i);
		t2 = clock();
		runtime = t2 - t1;

		//printing in cmd and csv file
		printf("Fibonacchi[%d] = %d, time = %f\n", i, result, (double)runtime / CLOCKS_PER_SEC);
		fprintf(fp, "%d; %d; %f\n", i, result, (double)runtime / CLOCKS_PER_SEC);
	}

	fclose(fp);
	return 0;
}