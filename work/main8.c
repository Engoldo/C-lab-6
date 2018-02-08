#define _CRT_SECURE_NO_WARNINGS
#include "task8.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	
	int result=0,count=0,i=0;
	/*
	char arr[N] = {0};
	FILE *fp = fopen("expression.txt", "rt");
	if (fp == NULL)
	{
		printf("File is not reading!\n");
		return 1;
	}
	if (!fgets(arr, N, fp))
	{
		printf("File is not reading!\n");
		return 1;
	}
	fclose(fp);
	result = eval(arr);
	printf("%d\n", result);
	*/
	if (argc > 1)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '(')
				count++;
			else if (argv[1][i] == ')')
				count--;
			i++;
		}
		if (count != 0)
		{
			printf("Error! Incorrect direction!");
			return 1;
		}
		printf("%s\n", argv[1]);
		result = eval(argv[1]);
		printf("%d\n", result);
	}
	return 0;
}