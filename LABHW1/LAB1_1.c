#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[5];
	int total = 0, i;
	double average = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &num);
		total += num[i];
		average = (double)total / 5;
	}
	printf("--------------------------------------------\n");
	printf("ÃÑÇÕÀº %d\n", total);
	printf("Æò±ÕÀº %d\n", average);
	printf("--------------------------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}