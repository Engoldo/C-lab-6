#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task5.h"

ull fib1(int N)
{
	if (N == 1 || N == 2)
		return 1;
	else
		return fib1(N - 2) + fib1(N - 1);
}