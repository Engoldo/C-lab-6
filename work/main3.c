/*
Написать программу, которая переводит введённое пользователем
целое число в строку с использованием рекурсии и без каких-либо
библиотечных функций преобразования.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	unsigned int num = 0;
	char buf[20];
	printf("Enter your number: ");
	scanf("%d", &num);
	int2str(buf, num);
	printf("Resulting string: %s\n", buf);
	return 0;
}