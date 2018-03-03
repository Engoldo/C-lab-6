/*
Написать программу, которая находит в диапазоне целых чисел от
2 до 1000000 число, формирующее самую длинную 
последовательность Коллатца.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	unsigned int maxlen = 0;
	unsigned int maxNum = seqCollatz(&maxlen);
	printf("Forming number, max length: %u, %u\n", maxNum, maxlen);
	return 0;
}