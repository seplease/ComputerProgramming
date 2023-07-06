#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, score[20] = { 0 }, benchmark, i, high[20], low[20];
	int j = 0, k = 0;
	int kk = 0, jj = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
		scanf("%d", &score[i]);

	scanf("%d", &benchmark);

	for (i = 0; i < num; i++)
		if (score[i] >= benchmark)
		{
			high[j] = score[i];
			jj = j;
			j++;
		}

		else
		{
			low[k] = score[i];
			kk = k;
			k++;
		}

	for (k = 0; k <= kk; k++)
		printf("%d ", low[k]);
	printf("\n");
	for (j = 0; j <= jj; j++)
		printf("%d ", high[j]);
}