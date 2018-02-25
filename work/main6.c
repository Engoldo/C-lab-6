#include <stdio.h>
#include <stdlib.h>
#include "task6.h"

int main()
{
	ull sum = 0;
	int N = 0;
	printf("Enter your number: ");
	scanf("%d", &N);
	sum = fib2(N);
	printf("%d-th number of Fibonacci = %lu\n", N, sum);
	return 0;
}