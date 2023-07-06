#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10 
#include <stdio.h>

int printSet();

int main(void)
{
	int i, num, multiset[SIZE] = { 0 }, count = 0;

	for (i = 0; i < 5; i++)
	{
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &num);

		multiset[i] = num;
		printSet(multiset, count);
		count++;
	}
}

int printSet(int mSet[], int cnt)
{
	int i;

	printf("{ ");
	for (i = 0; i <= cnt; i++)
	{
		if (i == cnt)
			printf("%d", mSet[i]);
		else
			printf("%d, ", mSet[i]);
	}
	printf(" }\n");
}