#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "task6.h"

int main()
{
	unsigned long long sum = 0;
	int i = 0;
	printf("Enter your number: ");
	scanf("%d", &i);
	sum = fib2(i);
	printf("%d-th number of Fibonacci = %llu\n", i, sum);
	return 0;
}