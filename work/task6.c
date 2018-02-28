#include <stdio.h>
#include <stdlib.h>
#include "task6.h"

unsigned long long fib2(int N)
{
	ull sum = 0;
	ull num1 = 0;
	ull num2 = 1;
	sum = fib3(num1, num2, N);
	return sum;
}

unsigned long long fib3(unsigned long long num1, unsigned long long num2, int N)
{
	ull sum = num1 + num2;

	if (N == 2)
		return sum;
	else
		sum = fib3(num2, sum, N - 1);
	return sum;
}