#include "task8.h"
#include <stdlib.h>
#define IN 1
#define OUT 0

char partition(char *buf, char *expr1, char *expr2)
{
	int flag = OUT;
	int i = 0, j = 0,k=0,count = 0;
	char oper=0;
	buf++;

	if (*buf != '(')
	{
		while (oper!='+'&& oper!='-'&& oper!='*'&&oper!='/')
		{
			expr1[k] = *buf;
			k++;
			buf++;
			oper = *buf;
		}
		expr1[k] = '\0';
		k = 0;
		buf++;
		while (*buf != ')')
		{
			expr2[k] = *buf;
			buf++;
			k++;
		}
		expr2[k] = '\0';
		return oper;
	}


	while (*buf)
	{
		expr1[j++] = *buf;
		if (*buf == '(')
		{
			flag = IN;
			count++;
		}
			
		else if (*buf == ')')
		{
			flag = OUT;
			count--;
		}
			
		else if (flag == OUT && count==0)
		{
			oper = *buf;
			buf++;
			while (*buf)
			{
				expr2[i++] = *buf;
				buf++;
			}
			i--;
			j--;
			expr1[j] = '\0';
			expr2[i] = '\0';
			break;
		}
		buf++;
	}
	return oper;
}

int eval(char *buf)
{
	char oper;
	char expr1[N] = { 0 }, expr2[N] = { 0 };
	if (*buf != '(')
		return atoi(buf);
	else
	{
		oper = partition(buf, expr1, expr2);
		switch (oper)
		{
			case '+':return eval(expr1) + eval(expr2);
			case '-':return eval(expr1) - eval(expr2);
			case '*':return eval(expr1) * eval(expr2);
			case '/':return eval(expr1) / eval(expr2);
		}
	}
}
