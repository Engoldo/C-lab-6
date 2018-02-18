#include <stdio.h>
#include "task3.h"


char* int2str(char* buf, unsigned int value)
{
	rekurs(value, buf);
	return buf;
}

void rekurs(unsigned int value, char *arr)
{
	static int i = 0,counter=0;
	
	if ((value / 10) == 0)
	{
		counter++;
		arr[i++] = value%10 + '0';
		arr[counter] = '\0';
	}
	else
	{
		counter++;
		rekurs(value / 10, arr);
		arr[i++] = value%10 + '0';
	}	
}