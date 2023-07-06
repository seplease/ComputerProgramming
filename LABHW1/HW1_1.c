#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int data[100];
	int num, i, j;
	int count[10] = { 0 };

	srand(time(NULL));

	printf("Enter the number of random numbers:(<= 100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		data[i] = rand() % 9;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < num; i++)
		{
			if (data[i] == j)
				count[j]++;
			else continue;
		}
	}

	for (j = 0; j < 10; j++)
		printf("%d의 개수는 %d\n", j, count[j]);

	printf("-------------------------------\n");
	printf("발생된 난수는\n");
	for (i = 0; i < num; i++)
	{
		if (i % 5 == 0 && i != 0)
			printf("\n");
		printf("%5d", data[i]);
	}

	return 0;
}