#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int list[], int size);

int main(void)
{
	int i, size = 10;
	int num[10];

	printf("발생된 난수:\t");
	for (i = 0; i < 10; i++) {
		num[i] = rand() % 100;
		printf("%d ", num[i]);
	}
	printf("\n정렬 후:\t");
	selectionSort(num, size);
}

void selectionSort(int list[], int size)
{
	int i, j, temp, minIndex;

	for (i = 0; i < size; i++) {
		minIndex = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[minIndex])
				minIndex = j;
		
		temp = list[i];
		list[i] = list[minIndex];
		list[minIndex] = temp;
	}
	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n");

	return 0;
}