#include "task4.h"

int exp(int num, int degree)							//exponentiation of number
{
	if (degree == 0)
		return 1;
	return num * exp(num, degree - 1);
}

long long sumC(char *arr, int len)
{
	long long sum = 0;
	for (int i = 0; i < len; i++)
		sum = sum + arr[i];
	return sum;
}

long long sumR(char *arr, int len)
{
	if (len == 1)
		return arr[0];
	else
		return arr[len-1] + sumR(arr, len - 1);
}