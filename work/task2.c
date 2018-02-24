#include <stdio.h>
#include "task2.h"

//функция, возвращающая число и записывающую по адресу maxlen длину
unsigned int seqCollatz(unsigned int *maxlen)
{
	*maxlen = 0;
	unsigned int i = 0, currMaxLength = 0;
	unsigned long long maxNum = 0;
	
	for (i = 2; i <= MAXCOLLATZ; i++)
	{
		currMaxLength = collatz(i);
		if (*maxlen < currMaxLength)
		{
			*maxlen = currMaxLength;
			maxNum = i;
		}
	}
	return maxNum;
}

//функция, возвращающая длину последовательности Коллатца для числа num
unsigned int collatz(unsigned long long num)
{
	static unsigned int collatzLen = 0;
	collatzLen++;
	if (num == 1)
		return collatzLen;
	else
	{
		if (num % 2 == 1)
			collatz(3 * num + 1);
		else
			collatz(num / 2);			
	}
	collatzLen = 0;
}