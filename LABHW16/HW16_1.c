#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int table[10][10];
	int i, j;
	int num;

	printf("--������ ǥ�� ������ �����ϴ�.\n");
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			table[i][j] = i * j;
			printf("%5d ", table[i][j]);
		}
		printf("\n");
	}
	printf("--���ϴ� ��������? ");
	scanf("%d", &num);
	i = num;
	for (j = 1; j <= 9; j++) {
		table[i][j] = i * j;
		printf("%5d ", table[i][j]);
	}
	printf("\n");
}