#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "task8.h"

#define SIZE 20

int eval(char *buf)
{
	char sign = 0;
	int result = 0;
	char expr1[SIZE] = { 0 };
	char expr2[SIZE] = { 0 };
	if (*buf != '(')
		return atoi(buf);
	else
	{
		sign = partition(buf, expr1, expr2);
		switch (sign)
		{
		case '+':
			result = eval(expr1) + eval(expr2);
			break;
		case '-':
			result = eval(expr1) - eval(expr2);
			break;
		case '*':
			result = eval(expr1) * eval(expr2);
			break;
		case '/':
			result = eval(expr1) / eval(expr2);
			break;
		default: return 0;
		}
		return result;
	}
}

char partition(char *buf, char *expr1, char *expr2)
{
	int flag = 0;
	char sign = 0;
	int i = 0;
	int j = 0;
	if (buf[i] == '(')
		i++;
	while ((buf[i] != '+' && buf[i] != '-' && buf[i] != '*' && buf[i] != '/') || flag != 0)
	{
		if (buf[i] == '(')
			flag++;
		if (buf[i] == ')')
			flag--;
		expr1[j++] = buf[i++];
	}
	expr1[j] = '\0';
	j = 0;
	sign = buf[i++];
	while (buf[i] != '\0')
	{
		expr2[j++] = buf[i++];
	}
	expr2[j-1] = '\0';
	return sign;
}