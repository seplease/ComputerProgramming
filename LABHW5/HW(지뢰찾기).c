#define _CRT_SECURE_NO_WARNINGS
/*
https://devyul.tistory.com/entry/C-%EA%B0%84%EB%8B%A8%ED%95%9C-%EC%A7%80%EB%A2%B0%EC%B0%BE%EA%B8%B0%EC%A7%80%EB%A2%B0%EC%9D%98-%EA%B0%9C%EC%88%98-%EC%B6%9C%EB%A0%A5
*/
#include<stdio.h>

#define X_VALUE 5 //2���� �迭�� ���� �� 
#define Y_VALUE 5 //2���� �迭�� ���� ��

void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;
	// grid �� ���� ���� �Է� 
	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]); // ������ ���ִ°�? ���ڿ� �������� ����!
}

void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*') {
				// ���⿡ ������ ������ ���� numOfBombs�� �ִ� �ڵ� �ۼ�
				if (i - 1 >= 0) {
					numOfBombs[i - 1][j]++;
					if (j - 1 >= 0)
						numOfBombs[i - 1][j - 1]++;
					if (j + 1 < Y_VALUE)
						numOfBombs[i - 1][j + 1]++;
				}

				//�Ʒ� �� ��
				if (i + 1 < X_VALUE) {
					numOfBombs[i + 1][j]++;
					if (j - 1 >= 0)
						numOfBombs[i + 1][j - 1]++;
					if (j + 1 < Y_VALUE)
						numOfBombs[i + 1][j + 1]++;
				}

				//����
				if (j - 1 >= 0)
					numOfBombs[i][j - 1]++;
				//������
				if (j + 1 < Y_VALUE)
					numOfBombs[i][j + 1]++;
			}
}

void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*')
				printf("*");
			else
				printf("%d", numOfBombs[i][j]);
		printf("\n");
	}
}

int main(void)
{
	char grid[X_VALUE][Y_VALUE + 1]; //���ڿ��� ��� �������� NULL�� ���� �ϹǷ� 
									// 5X5 �迭�� �ƴ� 5X6 �迭�� �Ǿ�� �Ѵ�. 
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 }; //������ ������ �ִ� ������ 5X5 �迭 

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}