#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task3.h"

char* int2str(char *buf, unsigned int value)
{
	static int shift;
	static int count;
	count++;
	if ((value / 10) == 0)
	{
		buf[count] = '\0';
		*buf = (char)((value % 10) + '0');
		shift = 1;
		count = 0;
		return buf;
	}
	else
	{
		*(int2str(buf, value / 10) + shift++) = (char)((value % 10) + '0');
		return buf;
	}
}