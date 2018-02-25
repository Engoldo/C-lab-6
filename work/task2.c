#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

ui seqCollatz(ui *maxnumber)
{
	ull i = 1;
	ui buf = 0;
	ui number = 0;
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

ui collatz(ull i)
{
	ull sum = 0;
	ui count = 0;
	sum = i;
	count = schet(i, count+1, sum);
	return count;
}

ui schet(ull i, ui count, ull sum)
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