#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task6.h"

ull fib1(int N)
{
	if (N == 1 || N == 2)
		return 1;
	else
		return fib1(N - 2) + fib1(N - 1);
}

ull fibIter(int N, ull *arr)
{
	if (arr[N] == 0)
	{
		if (N == 1 || N == 2)
			arr[N] = 1;
		else
			arr[N] = fibIter(N - 1, arr) + fibIter(N - 2, arr);
	}

	return arr[N];
}

ull fib2(int N)
{
	ull arr[SIZE_6] = { 0 };
	return fibIter(N, arr);
}