#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int eachDigits(int n)
{
	// ���⸦ ��������� �ۼ�
	int sum = 0;

	if (n == 0)
		return 0;

	else {
		sum = n % 10 + eachDigits(n / 10);
		printf("%d ", n % 10);
		return sum;
	}
}

int main(void) // �������� ����
{
	int num;
	scanf("%d", &num);
	printf("\n%d\n", eachDigits(num));
}