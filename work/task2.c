#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"

unsigned int seqCollatz(unsigned int *maxlen)
{
	*maxlen = 0;
	unsigned int currLen = 0, maxNum = 0, i = 0;
	for (i = 2; i <= 1000000U; i++)
	{
		currLen = collatz((unsigned long long)i);
		////putchar('\n');
		if (*maxlen < currLen)
		{
			*maxlen = currLen;
			maxNum = i;
		}
	}

	return maxNum;
}

unsigned int collatz(unsigned long long num)
{
	static unsigned int countLen = 0;
	countLen++;
	////printf("%llu ", num);
	if (num == (unsigned long long)(1))
	{
		unsigned int tmpCount = countLen;
		countLen = 0;
		return tmpCount;
	}
	else
	{
		if (num % (unsigned long long)(2))
			collatz((unsigned long long)(3)*num + (unsigned long long)(1));
		else
			collatz(num / (unsigned long long)(2));
	}
}