#include <stdio.h>
#include "task3.h"

char* int2str(char *buf, unsigned int value)
{
	static int counter = 0;
	static int i = 0;
	counter++;

	if (value / 10 == 0)		
		buf[i++] = value % 10 + '0';
	else
	{
		int2str(buf, (value / 10));
		buf[i++] = value % 10 + '0';		
		buf[counter] = '\0';
	}
	return buf;	
}
