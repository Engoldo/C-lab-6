#define  _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
	char buf[20];
	unsigned int num;
	printf("Enter a number:\n");
	scanf("%u", &num);
	printf("String is %s\n", int2str(buf, num));
}