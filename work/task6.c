#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task6.h"

ull fib1(int X)
{
	if (X == 1 || X == 2)
		return 1;
	else
		return fib1(X - 2) + fib1(X - 1);
}

ull fibIter(int X, ull *arr)
{
	if (arr[X] == 0)
	{
		if (X == 1 || X == 2)
			arr[X] = 1;
		else
			arr[X] = fibIter(X - 1, arr) + fibIter(X - 2, arr);
	}

	return arr[X];
}

ull fib2(int X)
{
	ull arr[SIZE_6] = { 0 };
	return fibIter(X, arr);
}