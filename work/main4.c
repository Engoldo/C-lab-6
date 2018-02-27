#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef long long int ll;
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define DELAY 50000
#include "task4.h"

int main()
{
	int j = 0;
	ll i = 0, rec = 0, usul = 0;
	int N = 1;
	int M;
	time_t start, end;
	double seconds_usul = 0.0, seconds_rec = 0.0;
	char *p;
	
	do{
		printf("Enter random stepen: \n");
		fflush(stdin);
		scanf("%i", &M);
		for (i=0;i<M;i++)
			N *= 2;
		p =(char*) malloc(N * sizeof(char));
	} while (p == NULL);

	for (i=0;i<N;i++)
		p[i]= rand() % 10+'0';
	p[N] = 0;
		
	time(&start);
		for (j = 0;j<DELAY;j++)// castom delay for reserch timing
			rec = sumR(p, N);
	time(&end);
		seconds_rec = difftime(end, start);
		printf("The time rekursii: %00.f seconds\n", seconds_rec);
	time(&start);
		for (j = 0;j<DELAY;j++)// castom delay for reserch timing
			usul =sumC(p,N);// -������������ ������� ������
	time(&end);
		seconds_usul = difftime(end, start);
		printf("The time usually: %00.f seconds\n", seconds_usul);
		printf("rec = %I64i, usually = %I64i  ,check diferent between methods = %I64i\n",rec,usul, rec- usul);
		double difernt = (seconds_rec / seconds_usul) * 100;
		printf("diferent between methods = %0.f%%\n", difernt);
		free(p);
	return 0;
}
/*�������� ���������, ������� ��������� ������ ������������ (�����������) � ����������� ���������
���������

��������� ��������� ��������� ������������������ ��������:

��������� �� ��������� ������ �������� ������� ������ M;
������� ������ ������������� ������� N = 2^M ;
�������� ������ ��� ������������ ������;
��������� ������� ��������� ������ �������;
������� ����� ������������ � ������������ ��������;
���������� ����� ���������� ������������ ������������ (�����������) � ����������� ���������;
����������� ������������ ������
������

��������� ������ �������� � ���� ������� (�, ��������, ������):

- long long sumC(char *arr,int len) - ������������ ������� ������
- long long sumR(char *arr,int len) - ������������ ������� ���������
- main() */