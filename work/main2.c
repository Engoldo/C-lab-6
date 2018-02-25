#include <stdio.h>
#include <stdlib.h>
#include "task2.h"   // задача 2 работа 6


int main()
{
	ull n = 0;
	ull maxnumber = 0;
	n = seqCollatz(&maxnumber);
	printf("%llu ", n);
	printf("%llu \n", maxnumber);
	return 0;
}