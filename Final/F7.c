#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution(int n) // �ڵ� �ۼ�
{
    int count = 0;
    scanf("%d", &n);
    while (n != 0)     {
        n = n / 10;
        ++count;
    }

    return count;
}

int main(void) // �������� ����
{
	int n;
	int jarisu;

	scanf("%d", &n);

	jarisu = solution(n);
	printf("%d\n", jarisu);
}