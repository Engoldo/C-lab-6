#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "task4.h"

int main()
{
	int M = 12, i = 0;
	clock_t t1, t2;
	int size = (int)pow(2.0, M);
	srand(time(0));
	char *arr = (char*)malloc(sizeof(char)*size);
	while (i < size)
	{
		arr[i] = rand() % 128;
		//printf("%d ", arr[i]);
		i++;
	}

	t1 = clock();
	while (clock() < (t1 + CLOCKS_PER_SEC));
	printf("\nSumC - %lu\n", sumC(arr, size));
	t2 = clock();
	int sec = (t2 - t1) / CLOCKS_PER_SEC;
	int ms = (t2 - t1) % CLOCKS_PER_SEC;
	printf("time - %d.%d\n", sec,ms);

	t1 = clock();
	while (clock() < (t1 + CLOCKS_PER_SEC));
	printf("\nSumR - %lu\n", sumR(arr, size));
	t2 = clock();
	sec = (t2 - t1) / CLOCKS_PER_SEC;
	ms = (t2 - t1 ) % CLOCKS_PER_SEC;
	printf("time - %d.%d\n", sec, ms);

	free(arr);
	return 0;
}