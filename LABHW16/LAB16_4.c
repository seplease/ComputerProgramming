#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6,5}, {1,2}, {3,4} };
	int i, j;
	int total = 0;
	double average = 0;
	int max = 0, maxTotal = 0;

	printf("�迭 test�� ������Ʈ�� ����մϴ�\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}

	printf("\n\n��>");
	for (i = 0; i < 4; i++)
	{
		test[i][2] = -1;
		printf("\n%d��° row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}

	printf("\n\n��>");
	for (i = 0; i < 4; i++)
	{
		test[i][2] = -1;
		for (j = 0; j < 3; j++)
			total += test[i][j];
	}
	printf("\nTotal is %d\n", total);
	average = (double)total / 12;
	printf("Average is %.2f", average);

	printf("\n\n��>\n");
	for (i = 0; i < 4; i++)
	{
		max = 0;
		for (j = 0; j < 2; j++)
		{
			if (test[i][j] > max)
				max = test[i][j];
		}
		maxTotal += max;
		printf("%d��° row������ �ִ밪: %d\n", i + 1, max);
	}
	printf("�ִ밪�� ��: %d", maxTotal);
}