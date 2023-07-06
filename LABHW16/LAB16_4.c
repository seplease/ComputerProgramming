#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6,5}, {1,2}, {3,4} };
	int i, j;
	int total = 0;
	double average = 0;
	int max = 0, maxTotal = 0;

	printf("배열 test의 엘리먼트를 출력합니다\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}

	printf("\n\n다>");
	for (i = 0; i < 4; i++)
	{
		test[i][2] = -1;
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}

	printf("\n\n라>");
	for (i = 0; i < 4; i++)
	{
		test[i][2] = -1;
		for (j = 0; j < 3; j++)
			total += test[i][j];
	}
	printf("\nTotal is %d\n", total);
	average = (double)total / 12;
	printf("Average is %.2f", average);

	printf("\n\n마>\n");
	for (i = 0; i < 4; i++)
	{
		max = 0;
		for (j = 0; j < 2; j++)
		{
			if (test[i][j] > max)
				max = test[i][j];
		}
		maxTotal += max;
		printf("%d번째 row에서의 최대값: %d\n", i + 1, max);
	}
	printf("최대값의 합: %d", maxTotal);
}