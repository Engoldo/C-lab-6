#include <stdio.h>
#include <stdlib.h>
#include "task3.h"


int main()
{
	uint number = 0;
	char buf[64] = { 0 };
	char *p = buf;
	printf("Enter number: ");
	scanf("%d", &number);
	p = int2str(p, number);
	printf("%s\n", buf);
	return 0;
}