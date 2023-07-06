#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10 
#include <stdio.h> 
int main(void)
{
	int seatChoice;
	char choice; // 계속 여부 
	int seats[SIZE] = { 0 };
	int i;

	printf("******좌석 예약 시스템******\n");

	printf("\n좌석을 예약하시겠습니까?(y/n) ");
	scanf("%c", &choice);
	while (choice == 'y')
	{
		// 좌석표 출력 
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("----------------------\n");
		for (i = 0; i < SIZE; i++)
			printf("%2d", seats[i]);
		printf("\n");

		printf("몇번째 좌석? ");
		scanf("%d", &seatChoice);

		if (seats[seatChoice - 1] == 0) { //예약 가능이면 
			seats[seatChoice - 1] = 1;
			printf("예약되었습니다.\n");

			// 예약내용 반영한 좌석표 출력 
			printf("----------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("----------------------\n");
			for (i = 0; i < SIZE; i++)
				printf("%2d", seats[i]);
			printf("\n");
		}
		else // 이미 예약되었으면 
			printf("이미 예약된 자리입니다.\n");

		while (getchar() != '\n'); //getchar()는 하나 문자입력

		printf("\n좌석을 예약하시겠습니까?(y/n) ");
		scanf("%c", &choice);
	}
}