#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int initTable(int table, int size);
int totalTable(int table, int size);
void printTable(int table, int size);
int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);

	printTable(table, 3);

	printf("----각 열의 합----\n");
	for (i = 0; i < 5; i++) {
		total = 0;
		for (j = 0; j < 3; j++) {
			total += table[j][i];
		}
		printf("%5d", total);
	}

	return 0;
}
int initTable(int table[][5], int size)
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			table[i][j] = rand() % 100;
	
	return table;
}
int totalTable(int table[][5], int size)
{
	int i, j;
	int total = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			total += table[i][j];
		}
	}

	return total;
}
void printTable(int table[][5], int size)
{
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			table[i][j] = rand() % 100;
			printf("%5d", table[i][j]);
		}
		printf("\n");
	}
}