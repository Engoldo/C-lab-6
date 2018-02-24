#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int maxlen = 0;
	unsigned long long num = 0;
	num = seqCollatz(&maxlen);
	printf("Collatz sequence in the range from 2 to %u:\n", MAXCOLLATZ);
	printf("Maximum number: %llu\n", num);
	printf("Maximum length: %u\n", maxlen);
	return 0;
}