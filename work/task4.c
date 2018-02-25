#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include "task4.h"
#define DELAY 20000
long long int sumC(char *arr, int len)// -суммирование массива циклом
{
	if (arr[len] != '\0')
		arr[len] = '\0';
		
	long long summ = 0;
		int i = 0;
		for (i=0;i < len;i++)
			summ += arr[i];
		
		return summ;
}
long long int sumR(char *arr, int len)// -суммирование массива рекурсией
{

	if (len==1)
		return *arr;
	else
			return	sumR(arr, (len/2)) 
						+sumR(arr+(len/2), len-(len/2));
	
}