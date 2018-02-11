#include "task2.h"
#include <stdio.h>


int main()
{
	unsigned int maxlen=0;
	unsigned long long num;
	num = seqCollatz(&maxlen);
	printf("Number - %llu\n", num);
	printf("length - %u\n", maxlen);
	
	return 0;
}