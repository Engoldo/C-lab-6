#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
	clock_t timeC1 = 0;
	clock_t timeC2 = 0;
	clock_t timeR1 = 0;
	clock_t timeR2 = 0;
	long long summaC = 0;
	long long summaR = 0;
	int M = 0;
	srand(time(0));
	printf("Enter a number\n");
	scanf("%d", &M);
	int N = 1;
	for (int i = 0; i < M; i++)
		N = N * 2;
	char *buf = (char*)malloc(sizeof(char));
	for (int i = 0; i < N; i++)
	{
		buf[i] = rand();
	}

	timeC1 = clock();
	summaC = sumC(buf, N);
	timeC2 = clock();
	timeR1 = clock();
	summaR = sumR(buf, N-1);
	timeR2 = clock();
	float timeresultC = (float)(timeC2 - timeC1) / CLOCKS_PER_SEC;
	float timeresultR = (float)(timeR2 - timeR1) / CLOCKS_PER_SEC;
	printf("Time with cycle = %f\nTime with recurse =%f\n", timeresultC, timeresultR);

	return 0;
}