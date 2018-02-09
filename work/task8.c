#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "task8.h"

#define IN 1
#define OUT 0
int flag = OUT;
void cleangap(char *p)
{
	int i = 0;
	int j = 0;
	while (*p == ' ' || (isnumb(p)) || *p == '(')// need for check
		--p;
	++p;
	for (i = 0;p[i] != '\0';i++)
	{
		j = 0;
		if (p[i] == ' ')
			for (j = i--;p[j] != 0;j++)

				p[j] = p[j + 1];

	}
}
char *int2str(char *buf,  int value)// recursia
{
	char minus = 0;
	static	int i;// need for from next step i=0

	if ( value < 0)
	{
		*buf = '-';
		value *= -1;// need for change - to +
	}
	i++;
	if ((value) == 0)
	{
		i = 0;
		if (*buf == '-')
			i = 1;// need for collect the negative number
		return buf;
	}
	else
		int2str(buf, (value / 10));
	
	buf[i++] = value % 10 + '0';
	return buf;

}

void inttochar(char *in, int value)// help from int to char*
{
	while (*in != ' ');
				int2str(in, value);			
}
int isnumb(char *arr)
{
		if (*arr >= '0' && *arr <= '9')
			return 1;
		else
			return 0;
}
int makeexpr(char op, char *expr1, char *expr2)
{
	int rezult = 0;
	switch (op)
	{
	case('+'):
		rezult=(atoi(expr1) + atoi(expr2));
		break;
	case('-'):
		rezult = (atoi(expr1) - atoi(expr2));
		break;
	case('*'):
		rezult = (atoi(expr1)  *  atoi(expr2));
		break;
	case('/'):
		rezult = (atoi(expr1) / atoi(expr2));
		break;
	}
	flag = OUT;
	return rezult;
}
char partition(char *buf, char *expr1, char *expr2)
{
	char op = '0';
	while (isnumb(buf))// if  number then will be '1' else '0'
	{
		*expr1++ = *buf;
		*buf++ = ' ';
	}
	op = *buf;
	*buf++ = ' ';	
	while(isnumb(buf))// if  number then will be '1' else '0'
		{	
		*expr2++ = *buf;
		*buf = ' ';
		}
	return op;
}
char *eval_recur(char *buf)// -функци€, вычисл€юща€ строку, содержащуюс€ в buf
{
	char a[10] = { "0" };
	char b[10] = { "0" };
	char *expr1 = a;
	char *expr2 = b;
	char op = '0';
	static int  count = 0;

	if (*buf == '\0')
		return buf;

	if (*buf == ')'&& flag == OUT)
	{
		*buf = ' ';
		flag = IN;
		//buf - 3;// for find'('
		return buf;
	}
	else
		eval_recur(++buf);

	if (flag != IN)
	return buf;// need for check
	else
	{
		while (*--buf != '(');
		*buf = ' ';// delete a bracket
		op = partition(buf+1,expr1, expr2);// buf-1 this a way for first number
		inttochar(buf, makeexpr(op, expr1, expr2));// int to buf for next loop,buf-
		cleangap(buf);
		return buf;
	}
	
}
int eval(char *p)
{
	cleangap(p);// for 
	char *buf = (char*)malloc(strlen(p) * sizeof(char));
	strcpy(buf, p);

	do {
		eval_recur(buf);

	} while (strlen(buf) > 2);

	return atoi(buf);
}