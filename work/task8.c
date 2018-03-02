#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task8.h"

//функци€, котора€ разбивает строку, содержащуюс€ в buf на три части: 
//строку с первым операндом, знак операции и строку со вторым операндом
char partition(char *buf, char *expr1, char *expr2)
{
	int inBrecket = 0;
	int expr1_len = 0, expr2_len = 0, bkt = 0;
	char sign = 0;
	buf++;

	if (*buf != '(')
	{
		while (*buf != '+' && *buf != '-' && *buf != '*' && *buf != '/')
		{
			expr1[expr1_len++] = *buf;
			buf++;
			sign = *buf;
		}
		expr1[expr1_len] = '\0';
		buf++;

		while (*buf != ')')
		{
			expr2[expr2_len++] = *buf;
			buf++;
		}		
		buf++;
		if (*buf == ')')
			expr2[expr2_len++] = ')';
		expr2[expr2_len] = '\0';

		return sign;
	}

	while (*buf)
	{
		expr1[expr1_len++] = *buf;

		if (*buf == '(')
		{
			inBrecket = 1;
			bkt++;
		}

		else if (*buf == ')')
		{
			inBrecket = 0;
			bkt--;
		}

		else if (inBrecket == 0 && bkt == 0)
		{
			sign = *buf;
			buf++;
			while (*buf)
			{
				expr2[expr2_len++] = *buf;
				buf++;
			}
			expr1[expr1_len-1] = '\0';
			expr2[expr2_len-1] = '\0';
			break;
		}
		buf++;
	}
	return sign;
}

//функци€, вычисл€юща€ строку, содержащуюс€ в buf
int eval(char *buf)
{
	char expr1[SIZE];
	char expr2[SIZE];

	if (*buf != '(')
		return atoi(buf);

	char operation = partition(buf, expr1, expr2);
	switch (operation)
	{
	case '+':
		return eval(expr1) + eval(expr2);
		break;
	case '-':
		return eval(expr1) - eval(expr2);
		break;
	case '*':
		return eval(expr1) * eval(expr2);
		break;
	case '/':
		return eval(expr1) / eval(expr2);
		break;
	}
	return 0;
}