#include <stdio.h>
#include <stdlib.h>
#include "task3.h"


int main()
{
	uint number = 0;
	char buf[64] = { 0 };
	printf("Enter number: ");
	scanf("%d", &number);
	int2str(buf, number);
	printf("%s\n", buf);
	return 0;
}