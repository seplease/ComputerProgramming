#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int change, i;
	int coins[4] = {500, 100, 50, 10};

	printf("Enter the amount of change: ");
	scanf("%d", &change);

	for (i = 0; i < 4; i++) {
		int count = 0;
		while (change >= coins[i]) {
			change -= coins[i];
			count++;
		}
		printf("%d coin: %d\n", coins[i], count);
	}
}