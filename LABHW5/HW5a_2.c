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
			table2[i][j] = table1[size1 - j - 1][i];

	return table2;
}

int main(void)
{
	int table1[4][4], table2[4][4];

	initTable(table1, 4);
	printTable(table1, 4);
	printf("\n");
	//1
	rotation90(table1, 4, table2, 4);
	printTable(table2, 4);
	printf("\n");
	//2
	rotation90(table2, 4, table1, 4);
	printTable(table1, 4);
	printf("\n");
	//3
	rotation90(table1, 4, table2, 4);
	printTable(table2, 4);
	printf("\n");
	//4
	rotation90(table2, 4, table1, 4);
	printTable(table1, 4);
	printf("\n");
}

/*
https://blog.naver.com/PostView.nhn?blogId=jhc9639&logNo=221700471321&categoryNo=110&parentCategoryNo=0&viewDate=&currentPage=1&postListTopCurrentPage=1&from=postView
*/