#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10 
#include <stdio.h> 
int main(void)
{
	int seatChoice;
	char choice; // ��� ���� 
	int seats[SIZE] = { 0 };
	int i;

	printf("******�¼� ���� �ý���******\n");

	printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
	scanf("%c", &choice);
	while (choice == 'y')
	{
		// �¼�ǥ ��� 
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("----------------------\n");
		for (i = 0; i < SIZE; i++)
			printf("%2d", seats[i]);
		printf("\n");

		printf("���° �¼�? ");
		scanf("%d", &seatChoice);

		if (seats[seatChoice - 1] == 0) { //���� �����̸� 
			seats[seatChoice - 1] = 1;
			printf("����Ǿ����ϴ�.\n");

			// ���೻�� �ݿ��� �¼�ǥ ��� 
			printf("----------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("----------------------\n");
			for (i = 0; i < SIZE; i++)
				printf("%2d", seats[i]);
			printf("\n");
		}
		else // �̹� ����Ǿ����� 
			printf("�̹� ����� �ڸ��Դϴ�.\n");

		while (getchar() != '\n'); //getchar()�� �ϳ� �����Է�

		printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
		scanf("%c", &choice);
	}
}