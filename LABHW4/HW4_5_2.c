#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n)
{
	if (n == 1) {
		printf("1");
		return 1;
	}
	else if (n != 1) {
		if (n % 2 == 0) {
			printf("%d ", n);
			return get_cycle_number(n /= 2) + 1;
		}
		else {
			printf("%d ", n);
			return get_cycle_number(n = n * 3 + 1) + 1;
		}
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("\n%d", get_cycle_number(n));
	return 0;
}