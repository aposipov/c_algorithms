#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *arr;
	int i = 0;
	int n;

	if (!argv[1])
		printf("NO argv\n");
	printf("input number of numbers: ");
	scanf("%d", &n);
	printf("n = %d\n", n);
	arr = (int *)malloc(sizeof(int) * n);
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;
	while (arr[i])
	{
		printf("num: %d\n", arr[i]);
		i++;
	}
	return 0;
}
