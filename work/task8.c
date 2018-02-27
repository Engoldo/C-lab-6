#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "task8.h"

#define IN 1
#define OUT 0
int flag = OUT;
char*addExpr(char *p, int bracket)
{
	int i = 0;
	int len = strlen(p);
	char op = '+';
	char expr2 = '0';
	char*buf = (char*)calloc(len + 2, sizeof(char));// add 2 char for expr2=0 and op='+'
	strcpy(buf, p);
	
	for (i = len+2;i>bracket ;i--)
		buf[i] = buf[i-2];

	buf[i++] = op;
	buf[i] = expr2;

	p=buf;//pass new string
	//p = (char*)calloc(len + 2, sizeof(char));// add 2 char for expr2=0 and op='+'
	//strcpy(p, buf);
	return p;
}

char* checkexpr(char*in,int *nomERROR)
{
	char* out;
	int len = strlen(in);
	int brac1 = 0;
	int brac2 = 0;
	int i = 0;
	int j = 0;
	int flagexpr1 = 0;//need for check expr1 if true then '1'
	int flagexpr2 = 0;//need for check expr2 if true then '1'
	int flagop = 0;
	int flagcheck = 0;
	out = (char*)calloc(len, sizeof(char));
	strcpy(out, in);
	
	for (i = 0;i < len;i++)
	{
		if (out[i] == '(')brac1++;
		if (out[i] == ')')brac2++;
	}
	if (brac1 - brac2 != 0)
	{return in;
	printf("%s/n", "ERROR input. YOU need check quantity of bracket");
	}
	for (i = 0;i < len;i++)
	{
		if (out[i] == ')')
		{
			 flagexpr1 = 0;//need for check expr1 if true then '1'
			 flagexpr2 = 0;//need for check expr2 if true then '1'
			 flagop = 0;//need for check operator if true then '1'
			for (j = i-1;out[j] != '(';j--)
			{
				if(isnumb(out+j) == 0 && flagexpr1 == 1)
					flagop=1;// condition op done
				if (isnumb(out+j)!=0 && flagop==0)
					flagexpr1 = 1;// condition expr1 done
				if (isnumb(out+j) != 0 && flagexpr1 == 1&& flagop==1)
					flagexpr2 = 1;// condition op done
			}
			if (flagexpr1 == 1 && flagexpr2 == 0&&flagop == 0)
			{
				out=addExpr(out,i);// check a lenght of function
				len=strlen(out);
				i = 0;// need for check with begine
				flagcheck++;
			}
		}
	}
	in = out;//change place
	
	if (flagcheck>0)
		*nomERROR= 2;//fix done

	return in;
}
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
		buf[i++] = value % 10 + '0';
		return buf;
	}
	else
		int2str(buf, (value / 10));
	if (value)
	{
		if (buf[0] == '0')i = i-1;
		buf[i++] = value % 10 + '0';
	}

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
		*buf++ = ' ';
		}
	*--buf;
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
	char *error[] = { "",
	                 "ERROR input. YOU need check quantity of bracket   " ,
	                 "FIX done"};
		int nom = 0;				
	cleangap(p);// for 
	char *buf = (char*)malloc(strlen(p) * sizeof(char));
	strcpy(buf, p);
	buf = checkexpr(p,&nom);// need for standart
		

	do {
		eval_recur(buf);

	} while (isnumb(buf)==0);

	return atoi(buf);
}