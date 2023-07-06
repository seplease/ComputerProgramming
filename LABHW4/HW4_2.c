#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++) {
		printf("%5d", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	int i;
	int fn_1 = 1 , fn_2 = 1, fn;

	if (n == 0 || n == 1)
		return 1;
	else {
		for (i = 1; i < n; i++) {
			fn = fn_1 + fn_2;
			fn_2 = fn_1;
			fn_1 = fn;
		}
	}

	return fn;
}