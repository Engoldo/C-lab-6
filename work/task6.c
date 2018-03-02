#include <stdio.h>
#include <stdlib.h>
#include "task6.h"



unsigned long long fib2(int N)
{
	return fib3(0, 1, N);
}

unsigned long long fib3(unsigned long long num1, unsigned long long num2, int i)
{
	if (i < 2)
		return num2;
	return fib3(num2, num1 + num2, i - 1);
}