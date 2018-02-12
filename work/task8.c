#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task8.h"

int isPar(char sym)
{
	return (sym == '(') || (sym == ')');
}

int eval(char *buf)
{
	char expr1[SIZE_8] = { '\0' };
	char expr2[SIZE_8] = { '\0' };
	char sign = partition(buf, expr1, expr2);
	if ((sign == '\0') && (strlen(expr2) == 0))
	{
		return atoi(expr1);
	}
	else if ((strlen(expr1) == 1) && (strlen(expr2) == 1))
	{
		int op1 = atoi(expr1), op2 = atoi(expr2), res = 0;
		switch (sign)
		{
		case '+':
			res = op1 + op2;
			break;
		case '-':
			res = op1 - op2;
			break;
		case '*':
			res = op1 * op2;
			break;
		case '/':
			res = op1 / op2;
			break;
		default:
			res = op1 + op2;
			break;
		}
		return res;
	}
	else
	{
		int res = 0;
		switch (sign)
		{
		case '+':
			res = eval(expr1) + eval(expr2);
			break;
		case '-':
			res = eval(expr1) - eval(expr2);
			break;
		case '*':
			res = eval(expr1) * eval(expr2);
			break;
		case '/':
			res = eval(expr1) / eval(expr2);
			break;
		default:
			res = eval(expr1) + eval(expr2);
			break;
		}
		return res;
	}
}

char partition(char *buf, char *expr1, char *expr2)
{
	char sign = 0;
	char *bufT = buf, *expr1T = expr1, *expr2T = expr2;
	int parNum = 0, bufLen = 0;
	while (*bufT)
	{
		if (isPar(*bufT))
			parNum++;
		bufT++;
		bufLen++;
	}
	int isExtPar = isPar(buf[0]) && isPar(buf[bufLen - 1]);

	if (parNum == 0)
	{
		if (bufLen == 1)
		{
			*expr1 = buf[0];
			*expr2 = 0;
			sign = 0;
		}
		else if (bufLen == 3)
		{
			*expr1 = buf[0];
			*expr2 = buf[2];
			sign = buf[1];
		}
		return sign;
	}
		
	if (isExtPar && (parNum == 2))
	{
		if (bufLen == 3)
		{
			*expr1 = buf[1];
			*expr2 = 0;
			sign = 0;
		}
		else if (bufLen == 5)
		{
			*expr1 = buf[1];
			*expr2 = buf[3];
			sign = buf[2];
		}
		return sign;
	}

	int numOpenPar = 0, numClosePar = 0;
	int signIdx = 0;
	for (int i = 0; i < bufLen; i++)
	{
		if (buf[i] == '(')
			numOpenPar++;
		else if (buf[i] == ')')
			numClosePar++;

		if ((!isExtPar && (numOpenPar == numClosePar) && numOpenPar && numClosePar) || 
			(isExtPar && (numOpenPar == (numClosePar + 1)) && numOpenPar && numClosePar))
		{
			signIdx = i;
			break;
		}
	}
	signIdx++;

	sign = buf[signIdx];

	int startIdx = (isExtPar) ? 1 : 0;
	int endIdx = (isExtPar) ? (bufLen - 2) : (bufLen - 1);

	for (int i = startIdx; i <= (signIdx - 1); i++)
		*expr1T++ = buf[i];

	for (int i = (signIdx + 1); i <= endIdx; i++)
		*expr2T++ = buf[i];

	return sign;
}