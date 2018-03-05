#include "task6.h"

ULL calc(int N, ULL *arr)
{
	if (arr[N] == 0)
	{
		if (N == 1 || N == 2)
			arr[N] = 1;
		else
			arr[N] = calc(N - PREV1, arr) + calc(N - PREV2, arr);
	}
	return arr[N];
}

ULL fib2(int N)
{
	unsigned long long arr[SIZE6] = { 0 };
	return calc(N, arr);
}
