#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[50] = { NULL };
	int num = 0;
	printf("Please enter the integer number: ");
	scanf("%d", &num);
	printf("The number convert in string: %s\n", int2str(buf, num));
	
	return 0;
}