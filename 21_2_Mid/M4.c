#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int aboveAverageTotal(int* p, int size)
{
	//���⸦ pointer ǥ������ �ۼ�
	int i;
	int sum = 0;

	for (i = 0; i < size; i++) {
		if (*p >= 50) {
			sum += *p;
			printf("%d ", *p);
		}
		*p++;
	}

	return sum;
}

int main(void) // �������� ����
{
	int i;
	int n;
	int data[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
	printf("\n%d\n", aboveAverageTotal(data, n));
}