#include <stdio.h>
#include <stdlib.h>
#include "task2.h"   // задача 2 работа 6


int main()
{
	ui n = 0;
	ui maxlen = 0;
	n = seqCollatz(&maxlen);
	printf("Max number - %d\n", n);
	printf("Max len - %d\n", maxlen);
	return 0;
}