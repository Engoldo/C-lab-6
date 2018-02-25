#include <stdio.h>
#include <stdlib.h>
#include "task3.h"


char *int2str(char *buf, unsigned int value)
{
	static uint i = 0;
	if (value > 9)
		int2str(buf, value/10);
	buf[i++] = (value % 10) + '0';
	return buf;
}
