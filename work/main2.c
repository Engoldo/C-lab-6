#include "task2.h"

int main()
{
	unsigned int maxlen = 0;
	unsigned int maxnum = seqCollatz(&maxlen);
	printf("number = %u, maxlen = %u\n", maxnum, maxlen);

	return 0;
}