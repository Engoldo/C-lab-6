#include "task3.h"

int main()
{
	unsigned int value = 0;
	char buf[10] = { '0' };

	printf("Enter the numbers from 1 to 9: \n");
	scanf("%d", &value);

	int2str(buf, value);
	printf("Converting: %s \n", buf);
	
	return 0;
}