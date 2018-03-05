#include "task1.h"

int main()
{
	int i = 0, j = 0;
	char arr[M][M] = { '\0' };
	int x = M / 2, y = M / 2;
	int size = 3;

	printf("Enter x, y, size of fractal:");
	scanf("%d, %d, %d", &x, &y, &size);
	drawFractal(arr, x, y, size);

	//print fractal
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
			printf("%c",arr[i][j]);
		if (i != M - 1)
			putchar('\n');
	}
	
	return 0;
}