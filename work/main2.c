#include "task2.h"
#include <stdio.h>


int main()
{
	unsigned int maxlen=0;
	unsigned int num;
	num = seqCollatz(&maxlen);
	printf("Number - %lu, length - %lu\n", num, maxlen);
	
	return 0;
}