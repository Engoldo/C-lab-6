#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "task4.h"

int main(int argc, char *argv[])
{
	srand(time(0));
	clock_t t1, t2;
	int exp = 0;
	if (argc < 2)
	{
		exp = 11;
		puts("Error 1");
	}
	else
		exp = atoi(argv[1]);

	int arrSize = (int)pow(2.0, (double)exp);
	char *arr = (char*)calloc(arrSize, sizeof(char));
	for (int i = 0; i < arrSize; i++)
		arr[i] = rand() % 128;

	t1 = clock();
	//while (clock() < (t1 + CLOCKS_PER_SEC));
	ll res1 = sumC(arr, arrSize);
	printf("Res1 = %lld\n", res1);
	t2 = clock();
	double sec = (double)(t2 - t1) / CLOCKS_PER_SEC;
	printf("Time1 = %f\n", sec);
	
	t1 = clock();
	//while (clock() < (t1 + CLOCKS_PER_SEC));
	ll res2 = sumR(arr, arrSize);
	printf("Res2 = %lld\n", res2);
	t2 = clock();
	sec = (double)(t2 - t1) / CLOCKS_PER_SEC;
	printf("Time2 = %f\n", sec);
	
	free(arr);
	return 0;
}