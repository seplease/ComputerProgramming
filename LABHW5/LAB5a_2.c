#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int initTable(int table[][4], int size)
{
	int i, j;
	int num = 1;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			table[i][j] = num++;

	return table;
}

void printTable(int table[][4], int size)
{
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%3d ", table[i][j]);
		printf("\n");
	}
}

int rotation90(int table1[][4], int size1, int table2[][4], int size2)
{
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			table2[j][3 - i] = table1[i][j];

	return table2;
}

int main(void)
{
	int table1[4][4], table2[4][4];

	initTable(table1, 4);
	printTable(table1, 4);
	printf("\n");
	rotation90(table1, 4, table2, 4);
	printTable(table2, 4);
}