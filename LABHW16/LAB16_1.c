#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int total = 0;
	int table[5][3] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

	printf("°¡>\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	printf("³ª>\n");
	i = 0;
	while (i < 5) {
		j = 0;
		while (j < 3) {
			table[i][j] = i + j;
			printf("%d ", table[i][j]);
			total += table[i][j];
			j++;
		}
		i++;
		printf("\n");
	}

	printf("´Ù>\n");
	printf("Total is %d", total);
}