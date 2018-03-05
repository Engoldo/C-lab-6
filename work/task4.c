#include "task4.h"

int newPow(int x, int y)
{
	if (y == 0)
		return 1;
	return x * newPow(x, y - 1);
}

long long sumC(char *arr, int len)
{
	int i = 0;
	long long sum = 0;

	for (i = 0; i < len; i++)
		sum += (long long)(arr[i]);
	return sum;
}

long long sumR(char *arr, int len)
{
	if (len == 1)
		return (long long)(arr[0]);
	else
		return (long long)(arr[len - 1]) + sumR(arr, len - 1);
}