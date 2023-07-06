#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int table[10][10];
	int i, j;
	int num;

	printf("--구구단 표는 다음과 같습니다.\n");
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			table[i][j] = i * j;
			printf("%5d ", table[i][j]);
		}
		printf("\n");
	}
	printf("--원하는 구구단은? ");
	scanf("%d", &num);
	i = num;
	for (j = 1; j <= 9; j++) {
		table[i][j] = i * j;
		printf("%5d ", table[i][j]);
	}
	printf("\n");
}