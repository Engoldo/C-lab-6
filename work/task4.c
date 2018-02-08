#include "task4.h"

long long sumC(char *arr, int len)
{
	int i = 0;
	long long sum=0;
	while (i <= len)
		sum += arr[i++];
	return sum;
}

long long sumR(char *arr, int len)
{
	if (len == 0)
	{
		return arr[len];
	}
	else
	{
		return	arr[len]+sumR(arr, len - 1);
	}

}