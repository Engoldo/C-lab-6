#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

ui seqCollatz(ui *maxlen)
{
	*maxlen = 0;
	ull i = 2;
	ui buf = 0;
	ui number = 0;
	while (i <= 1000000)
	{
		buf = collatz(i);
		if (buf > *maxlen)
		{
			number = i;
			*maxlen = buf;
		}
		i++;
	}
	return number;
}

ui collatz(ull num)
{
	ull sum = 0;
	ui count = 0;
	sum = num;
	count = schet(num, count + 1, sum);
	return count;
}


ui schet(ull i, ui count, ull sum)
{
	if (sum == 1)
		return count;
	else if ((sum % 2) == 0)
		return schet(i, count + 1, sum/2);
	else if ((sum % 2) == 1)
		return schet(i, count + 1, (sum*3)+1);
}
