#include "task6.h"


ULL fib2(int N)
{
	return fibCalc(0, 1, N);
}

ULL fibCalc(ULL x, ULL y, int N)
{
	if (N == 1)
		return y;
	else
	{
		return fibCalc(y, x + y, N - 1);
	}
}