#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	FILE *wp;
	wp = fopen("mp.txt", "wt");
	clock_t time1 = 0;
	clock_t time2 = 0;
	ull fib = 0;
	int N = 40;
	time1 = clock();
	fib = fib1(N);
	time2 = clock();
	float timeresult = (float)(time2 - time1) / CLOCKS_PER_SEC;
	printf("Time = %f\n", timeresult);

	for (int i = 1; i <= N; i++)
	{
		fib = fib1(i);
		fprintf(wp, "Serial number = %2d, Fub number = %9lu\n", i, fib);
		printf("Serial number = %2d, Fub number = %9lu\n", i, fib);
	}
	fclose(wp);
	return 0;
}