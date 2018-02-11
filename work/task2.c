#include "task2.h"
#include <stdio.h>

unsigned long long seqCollatz(unsigned int *maxlen)
{
	*maxlen = 0;
	unsigned int len;
	unsigned long long number;
	for (unsigned long long i = 2; i <= MAX; i++)
	{
		len=collatz(i);
		if (collatz(0))
			printf("Counter is not NULL!");
		if (len > *maxlen)
		{
			*maxlen = len;
			number = i;
		}
	}
	return number;
}



unsigned int collatz(unsigned long long num)
{
	static unsigned int count = 0;
	if (num == 0)
	{
		count = 0;
		return 0;
	}
	if (num == 1)
	{
		count++;
		//printf("%lu\n  ", num);
		return count;
	}
		
	else if (num % 2 == 0)
	{
		count++;
		//printf("%lu  ", num);
		return collatz(num / 2);
	}
		
	else
	{
		count++;
		//printf("%lu  ", num);
		return collatz(3 * num + 1);
	}
}

