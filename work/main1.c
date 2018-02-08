#include "task1.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	/*char** arr = (char**)calloc(M,sizeof(char*));
	for (i = 0; i < M; i++)
		arr[i] = (char*)calloc(M, sizeof(char));*/
	char arr[M][M] = { 0 };
	int x = M / 2, y = M / 2;
	int size = 2;
	for ( i = 0; i < M; i++)
		for ( j = 0; j < M; j++)
			arr[i][j] = ' ';
	if (check(x,y,size))
	{
		printf("Error!The image didnt fit in array!\n");
		return 1;
	}
	drawFractal(arr, x, y, size);
	for ( i = 0; i < M; i++)
	{	
		for ( j = 0; j < M; j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
