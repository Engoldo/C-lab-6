#include "task4.h"

int main()
{
	clock_t t1 = 0, t2 = 0, runtimeIter, runtimeRec;
	int sum = 0, pow = 0, len = 0, sec = 0, *arr = 0;

	printf("Enter power of the number: \n");
	scanf("%d", &pow);
	len = newPow(2, pow);

	arr = (int*)calloc(len, sizeof(int));

	srand(time(0));
	for (int i = 0; i < len; i++)
	{
		arr[i] = rand() % 10;
	}
	
	t1 = clock();
	while (clock() < (t1 + CLOCKS_PER_SEC));
	printf("SumC = %llu\n", sumC(arr, len));
	t2 = clock();
	runtimeIter = (t2 - t1) / CLOCKS_PER_SEC;
	printf("TimeC =  %f\n", (double)runtimeIter / CLOCKS_PER_SEC);

	t1 = clock();
	while (clock() < (t1 + CLOCKS_PER_SEC));
	printf("SumR = %llu\n", sumR(arr, len));
	t2 = clock();
	runtimeRec = (t2 - t1) / CLOCKS_PER_SEC;
	printf("TimeR = %f\n", (double)runtimeRec / CLOCKS_PER_SEC);
	
	if (runtimeRec < runtimeIter)
		printf("runtimeRecursively < runtimeIteratively\n");
	else if (runtimeRec > runtimeIter)
		printf("runtimeRecursively > runtimeIteratively\n");
	else if (runtimeRec == runtimeIter)
		printf("runtimeRecursively == runtimeIteratively\n");

	free(arr);
	return 0;
}