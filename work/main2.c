#include <stdio.h>
#include <stdlib.h>
#include "task2.h"   // ������ 2 ������ 6


int main()
{
	ui n = 0;
	ui maxnumber = 0;
	n = seqCollatz(&maxnumber);
	printf("%d\n", n);
	printf("%d\n", maxnumber);
	return 0;
}