#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int num);
int main(void)
{
	int num = 0, sum = 0;

	scanf("%d", &num);
	while (num != -1)
	{
		if (isPrime(num))
			sum += num;

		scanf("%d", &num);
	}
	printf("%d", sum);
}
int isPrime(int num)
{
	int i;

	for (i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

/*
int main(void)
{
	int i, num, total = 0;

	scanf("%d", &num};
	while (num != -1) {
	for (i = 2; i < num; i++)
		if (num % i == 0)
			break;
	if (i == num) //소수이면
		total += num;
		
	scanf("%d", &num);
	}
	printf("%d", total);
*/