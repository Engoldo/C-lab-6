#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	//putchar(' ');
	//uint len = collatz(27);
	uint maxlen = 0;
	uint maxNum = seqCollatz(&maxlen);
	printf("Forming number, max length: %u, %u\n", maxNum, maxlen);
	return 0;
}