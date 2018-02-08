#include "task2.h"
#include <stdio.h>

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned int len;
	unsigned int number;
	for (unsigned int i = 2; i <= MAX; i++)
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



unsigned int collatz(unsigned long num)
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