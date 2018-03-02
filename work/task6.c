#include "task6.h"

unsigned long long arrFib(unsigned long long *arr, int n)
{
	if (arr[n] == 0)
	{
		if (n == 1 || n == 2)
			arr[n] = 1;
		else
			arr[n] = arrFib(arr, n - 1) + arrFib(arr, n - 2);
	}
	return arr[n];
}

unsigned long long fib2(int N)
{
	unsigned long long arr[1000] = { 0 };
	return arrFib(arr, N);
}