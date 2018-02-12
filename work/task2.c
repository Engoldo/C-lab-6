#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"

uint seqCollatz(uint *maxlen)
{
	*maxlen = 0;
	uint currLen = 0, maxNum = 0, i = 0;
	for (i = 2; i <= 1000000U; i++)
	{
		currLen = collatz((ull)i);
		////putchar('\n');
		if (*maxlen < currLen)
		{
			*maxlen = currLen;
			maxNum = i;
		}
	}

	return maxNum;
}

uint collatz(ull num)
{
	static uint countLen = 0;
	countLen++;
	////printf("%llu ", num);
	if (num == (ull)(1))
	{
		uint tmpCount = countLen;
		countLen = 0;
		return tmpCount;
	}
	else
	{
		if (num % (ull)(2))
			collatz((ull)(3)*num + (ull)(1));
		else
			collatz(num / (ull)(2));
	}
}