#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

long long sumC(char *arr, int len)
{
	clock_t now;
	now = clock();
	while (clock() <= now + CLOCKS_PER_SEC/100);
	long long sum = 0;
	for (int i = 0; i < len; i++)
		sum = sum + arr[i];
	return sum;
}
long long sumR(char *arr, int len)
{
	clock_t now;
	now = clock();
	while (clock() <= now + CLOCKS_PER_SEC/100);
	long long sum = 0;
	if (len > 0)
		sum = sumR(arr, len - 1);
	sum = sum + arr[len];
	return sum;
}