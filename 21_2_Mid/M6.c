#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calFruit(int n)
{
	// �ڵ� �ۼ�
	int m;

	if (n == 0) {
		return 0;
	}
	else {
		m = n / 10 + n % 10 + n;
		return m;
	}
}

int main(void) //�������� ����
{
	int n;

	scanf("%d", &n);
	printf("%d\n", calFruit(n));
}