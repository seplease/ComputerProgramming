#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#define BOARD_SIZE 10 // 추후에 10으로 바꾸어서 진행한다
int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum = 1;
	char player = b[r][c];
	
	// 왼쪽 체크
	while {

	}

	// 오른쪽 체크
	while {

	}

	if (sum == 5) return 1;
	return 0;
}

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf(" ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}
void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] == ' ') {
			board[r][c] = turn;
			display(board);
			if (win = winCheck(board, r, c))
				printf("Player %c wins!\n", turn);
			turn = (turn == 'X' ? 'O' : 'X'); // (조건식) ? (조건식이 참일 때의 값) : (거짓일 때의 값)
			count++;
		}
	} while (count <= BOARD_SIZE * BOARD_SIZE);

	if (!win && count == BOARD_SIZE * BOARD_SIZE)
		printf("Nobody win!\n");
}