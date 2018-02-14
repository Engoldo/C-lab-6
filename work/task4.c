#include "task4.h"

int powto(int x, int y)
{
	if (y == 0)
		return 1;
	return x*powto(x, y - 1);
}

long long sumC(char *arr, int len)
{
	int i = 0;
	long long sum=0;
	while (i < len)
		sum += arr[i++];
	return sum;
}

long long sumR(char *arr, int len)
{
	static char flag=1;
	if (len == 0)
	{
		return arr[len];
	}
	else
	{
		if (flag)
		{
			flag = 0;
			len--;
		}
		return	arr[len]+sumR(arr, len - 1);
	}

}