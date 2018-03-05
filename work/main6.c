#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int N = 0, result = 0;
	printf("Enter number from Fibonacci series:\n");
	scanf("%d", &N);
	result = fib2(N);
	printf("Fibonacci from that number = %d\n", result);
	
	return 0;
}