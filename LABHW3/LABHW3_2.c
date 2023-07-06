#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
void printMinMax(int arr[], int size)
{
	// �ּҰ�, �ִ밪�� ã�Ƽ� �ε����� �Բ� ����ϵ��� �����϶�
	int min = 100, max = 0, i;
	int minIndex = 0, maxIndex = 0;

	for (i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
	}
	printf("�ִ밪: �ε��� = %d, �� = %d\n", maxIndex, max);
	printf("�ּҰ�: �ε��� = %d, �� = %d\n", minIndex, min);
}
int main(void) // �������� ����
{
	int a[10];
	//srand(time(NULL)); 
	srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}