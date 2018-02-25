#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

ull seqCollatz(ull *maxnumber)
{
	ull i = 1;
	ull buf = 0;
	ull number = 0;
	while (i <= 1000000)
	{
		buf = collatz(i);
		if (buf > *maxnumber)
		{
			number = i;
			*maxnumber = buf;
		}
		i++;
	}
	return number;
}

ull collatz(i)
{
	ull sum = 0;
	ull count = 0;
	sum = i;
	count = schet(i, count+1, sum);
	return count;
}

ull schet(ull i, ull count, ull sum)
{
	if (i == 1)
		return count;
	else if (sum == 1)
		return count;
	else if ((sum % 2) == 0)
	{
		sum = sum / 2;
		count = schet(i, count + 1, sum);
	}
	else if ((sum % 2) == 1)
	{
		sum = sum*3 + 1;
		count = schet(i, count + 1, sum);
	}
}