#include "task3.h"

char* int2str(char *buf, unsigned int value)
{
	static int count;
	static int div;

	count++;
	//if value divided by 10
	if ((value / 10) == 0)
	{
		buf[count] = '\0';
		*buf = (char)((value % 10) + '0');
		count = 0;
		div = 1;
		return buf;
	}
	//if value doesn't divided by 10
	else
	{
		*(int2str(buf, value / 10) + div++) = (char)((value % 10) + '0');
		return buf;
	}
}