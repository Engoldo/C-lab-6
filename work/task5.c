#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task5.h"

unsigned long long fib1(int X)
{
	if (X == 1 || X == 2)
		return 1;
	else
		return fib1(X - 2) + fib1(X - 1);
}