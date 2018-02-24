#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	
	if (argc == 1)
	{
		printf("Please enter the mathematical expression in command line!\n");
		return 1;
	}	
	printf("Your expression: %s\n", argv[1]);
	int result = eval(argv[1]);
	printf("Result: %d\n", result);
	
	return 0;

}