/*
Написать реализацию рекурсивной функции, вычисляющую n-ый элемент 
ряда Фибоначчи, 
но без экспоненциально растущей рекурсии.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

int main()
{
	unsigned long long res = 0;
	int n = 0;
	clock_t t1, t2;
	double sec = 0.0;

	for (n = 1; n <= 40; n++)
	{
		t1 = clock();
		res = fib2(n);
		t2 = clock();
		sec = (double)(t2 - t1) / CLOCKS_PER_SEC;
		fprintf(stdout, "%d\t%f\n", n, sec);
	}

	return 0;
}