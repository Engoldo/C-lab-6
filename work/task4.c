#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task4.h"

ll sumC(char *arr, int len)
{
	ll sum = 0;
	for (int i = 0; i < len; i++)
		sum += (ll)(arr[i]);
	return sum;
}

ll sumR(char *arr, int len)
{
	if (len == 1)
		return (ll)(arr[0]);
	else
		return (ll)(arr[len - 1]) + sumR(arr, len - 1);
}