#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	int result = 0;
	int flag = 0;
	int i = 0;
	//char* buf = "(((100+2)-3)+(2*(2-3)))";
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '(')
			flag++;
		else if (argv[1][i] == ')')
			flag--;
		i++;
	}
	if (flag != 0)
	{
		printf("Error! Check the correctness of the input!");
		return 1;
	}
	/*while (buf[i] != '\0')
	{
		if (buf[i] == '(')
			flag++;
		else if (buf[i] == ')')
			flag--;
		i++;
	}
	if (flag != 0)
	{
		printf("Error! Check the correctness of the input!");
		return 1;
	}
	printf("%s=", buf);
	result = eval(buf);
	printf("%d\n", result);*/
	printf("%s=", argv[1]);
	result = eval(argv[1]);
	printf("%d\n", result);
	return 0;
}