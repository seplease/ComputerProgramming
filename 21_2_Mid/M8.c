#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void initArray(int arr[], int size) { //�������� ����
	int i, k = 0;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	return;
}

int isPalinSeries(int* p, int size)
{
	int* p2 = p + (size - 1);

	// ���� �ۼ���
	// �迭�� ǥ���� �������� p�� p2�� ��ȭ��Ű�鼭 �ۼ��϶�
	int i;

	for (i = 0; i < size / 2; i++) {
		if (*p != *p2) {
			return 0;
			break;
		}
		p += 1;
		p2 -= 1;
	}
	return 1;
}

int main(void) // �������� ����
{
	int arr1[5];
	int i, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		initArray(arr1, 5);
		printf("%d\n", isPalinSeries(arr1, 5));
	}
}