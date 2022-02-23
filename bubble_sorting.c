#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//int main()
//{
//	int i = 0;
//	int n = 5;
//	int *array = {3, 2, 6, 9, 1};
//	int tmp;
//	int swap = 0;
//
//	array = (int *)malloc(n * sizeof(int));
//	while(i < n)
//		i++;
//	while(i >= 0)
//	{
//		//i = n - 1;
//		i--;
//		swap = 0;
//		int j = 0;
//		while(j < i)
//		{
//			j++;
//			if (array[j] > array[j + 1])
//			{
//				tmp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = tmp;
//				swap = 1;
//			}
//		}
//		if (swap == 0)
//			break;
//	}
//	free(array);
//	return 0;
//}

//int main()
//{
//	int N;
//	printf("Input N: ");
//	scanf("%d", &N);
//	int* mass;
//	mass = (int *)malloc(N * sizeof(int));
//	printf("Input the array elements:\n");
//	for (int i = 0; i < N; i++)
//		scanf("%d", &mass[i]);
//	int tmp;
//	bool noswap;
//
//	for (int i = N - 1; i >= 0; i--)
//	{
//		noswap = 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (mass[j] > mass[j + 1])
//			{
//				tmp = mass[j];
//				mass[j] = mass[j + 1];
//				mass[j + 1] = tmp;
//				noswap = 0;
//			}
//		}
//		if (noswap == 1)
//			break;
//	}
//	printf("Sorted array:\n");
//	for (int i = 0; i < N; i++)
//		printf("%d ", mass[i]);
//	printf("\n");
//	free(mass);
//	return 0;
//}

int main()
{
	char *array;
	int a, b;
	char tmp;
	int n;

	array = (int *)malloc(n * sizeof(int));
	printf("input n = ");
	scanf("%d", &n);
	printf("Input the array elements:\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);


	a = 1;
	while(a < n)
	{
		++a;
		b = n - 1;
		while (b >= a)
		{
			--b;
			if (array[b - 1] > array[b])
			{
				tmp = array[b - 1];
				array[b - 1] = array[b];
				array[b] = tmp;
				printf("** %d", array[b]);
			}
		}
	}

	return(0);
}