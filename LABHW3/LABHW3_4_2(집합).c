#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSet(int set[], int size);

int main(void)
{
	int i, num, set[5] = { 0 }, size = 0;

	while (size < 5)
	{
		printf("���տ� �߰��� ����: ");
		scanf("%d", &num);

		for (i = 0; i < size; i++)
			if (set[i] == num)
			{
				printf("%d�� �̹� ���տ� ����\n", num);
				break;
			}
		if (i == size)
		{
			set[size] = num;
			printSet(set, size);
			size++;
		}
	}
}
void printSet(int set[], int size)
{
	int i;

	printf("{ ");
	for (i = 0; i <= size; i++)
		if (i == size)
			printf("%d", set[i]);
		else
			printf("%d, ", set[i]);
	printf(" }\n");
}