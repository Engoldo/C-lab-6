#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include "task4.h"
#define DELAY 20000
long long int sumC(char *arr, int len)// -суммирование массива циклом
{
	
		
	long long summ = 0;
		int i = 0;
		for (i=0;i < len;i++)
			summ += arr[i] - '0';
		
		return summ;
}
long long int sumR(char *arr, int len)// -суммирование массива рекурсией
{
	

	if (len==1)
		return *arr-'0';
	else
			return	sumR(arr+1, len-1)+(*arr-'0')  ;
	
}