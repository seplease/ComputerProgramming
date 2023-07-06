#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void initArray(int arr[], int size) { //변경하지 말라
	int i, k = 0;
	int j;
	int r;

	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	return;
}

void printArray(int arr[], int size) { //변경하지 말라
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

void turnArray(int array1[], int array2[], int size)
{
	// 여기를 작성
	int i, r;
	int j;

	scanf("%d", &r);
	j = r;

	if (j > 1) {
		for (i = 0; i < size; i++) {
			if (i < r) {
				array2[i] = array1[size - j];
				j--;
			}
			if (r <= i) {
				array2[i] = array1[i - r];
			}
		}
	}
	else {
		for (i = 0; i < size; i++) {
			if (i == 0) {
				array2[i] = array1[size - 1];
			}
			if (1 <= i) {
				array2[i] = array1[i - 1];
			}
		}
	}
}

int main(void) // 변경하지 말라
{
	int arr1[5];
	int arr2[5];
	int i;
	int n;

	initArray(arr1, 5);
	turnArray(arr1, arr2, 5);
	printArray(arr2, 5);
}