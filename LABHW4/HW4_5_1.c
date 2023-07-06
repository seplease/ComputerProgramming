#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n)
{
	int i = 0;

	printf("%d ", n);
	i++;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			i++;
			printf("%d ", n);
		}
		else {
			n = n * 3 + 1;
			i++;
			printf("%d ", n);
		}
	}
	return i;
}
int main(void)
{
	int n;

	scanf("%d", &n);
	printf("\n%d ", get_cycle_number(n));
	return 0;
}