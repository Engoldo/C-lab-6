#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
	int M, size;
	clock_t start, end;
	srand(time(0));

	printf("Enter the value of the degree for number \"2\":\n");
	scanf("%d", &M);

	size = exp(2, M);
	char *arr = (char*)malloc(100000 * size * sizeof(char));
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 128;
	}

	start = clock();
	long long cycle = sumC(arr, size);
	printf("Sum by cycle = %lld\n", cycle);
	end = clock();
	double sec = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Cycle time: %f seconds\n", sec);

	start = clock();
	long long recursion = sumR(arr, size);
	printf("Sum by recursion = %lld\n", recursion);
	end = clock();
	sec = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Recursion time: %f seconds\n", sec);

	free(arr);

	return 0;
}