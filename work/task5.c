#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

unsigned long long fib1(int N)
{
	ull sum = 0;
	if (N < 3)
		sum = 1;
	else
		sum = fib1(N - 1) + fib1(N - 2);
	return sum;
}