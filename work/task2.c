#include "task2.h"

unsigned int seqCollatz(unsigned int *maxlen)
{
	*maxlen = 0;
	unsigned int i = 0, len = 0, maxnum = 0;

	for (i = MIN; i <= MAX; i++)
	{
		len = collatz((ULL)i);
		if (*maxlen < len)
		{
			*maxlen = len;
			maxnum = i;
		}
	}
	return maxnum;
}

//We take any natural number n. If it is even, then divide it by 2, and if it's odd, then multiply by 3 and add 1 (we get 3n + 1). 
//Above the number obtained, we perform the same actions, and so on.

unsigned int collatz(ULL num)
{ 
	
	static unsigned int count = 0;
	unsigned int tmp = 0;
	count++;

	if (num == (ULL)(1))
	{
		tmp = count;
		count = 0;
		return tmp;
	}

	else
	{
		{
		if (num % (ULL)(2))
			collatz((ULL)(3)*num + (ULL)(1));
		else
			collatz(num / (ULL)(2)); 
		}
	}
}
