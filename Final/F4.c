#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 20
#define MAX_CUST 20 // max customer
#define MAX_CHAR 100 // ���ڿ��� max ����
#include <stdio.h>
#include <string.h>

typedef struct {
	char title[MAX_CHAR];
	int qty; // ����
} VideoInfo;

typedef struct {
	int custId;
	char title[MAX_CHAR]; // Video ����
} RentInfo;

void printAllVideo(VideoInfo videoList[], int videoCount) // �������� ����
{
	int i;

	//printf("Video����\t ����\n");
	//printf("-----------------------\n");
	for (i = 0; i < videoCount; i++)
		printf("%s %d\n", videoList[i].title, videoList[i].qty);
}

int searchVideoByTitle(VideoInfo* videoList, int videoCount, char* title) // �������� ����
{
	int i;
	for (i = 0; i < videoCount; i++)
		if (!strcmp(videoList[i].title, title))
			return i;
	return -1;
}

void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title, int qty) // �ڵ� �ۼ�
{
	int temp;
	temp = searchVideoByTitle(videoList, videoCountPtr, title);

	if ((videoList[temp].title) == title)
		videoList[*videoCountPtr].qty += qty;
	else {
		strcpy(videoList[*videoCountPtr].title, title);
		videoList[*videoCountPtr].qty = qty;
		(*videoCountPtr)++;
	}
}

void rentVideo(VideoInfo* videoList, int videoCount, RentInfo* rentList, int* rentCount, char* title, int custId) // �������� ����
{
	int indexSearched = searchVideoByTitle(videoList, videoCount, title);

	strcpy(rentList[*rentCount].title, title);
	rentList[*rentCount].custId = custId;
	(*rentCount)++;
	videoList[indexSearched].qty--;
}

void printAllRent(RentInfo* rentList, int rentCount) // �������� ����
{
	int i;

	//printf("��id\tVideo����\n");
	//printf("-----------------------\n");
	for (i = 0; i < rentCount; i++)
		printf("%d %s\n", rentList[i].custId, rentList[i].title);
}//����

int main(void) // �������� ����
{
	int videoCount = 5;
	VideoInfo videoList[MAX_VIDEO] =  // �������
	{ {"aaa", 1}, {"bbb", 3},
		{"ccc", 5}, {"ddd", 7}, {"eee", 9} };
	int rentCount = 0;
	RentInfo rentList[MAX_CUST]; // �뿩���

	int choice;
	int indexSearched;
	char title[MAX_CHAR];
	int custId, qty;

	//printf("1(����������), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩������), 6(�ݳ�), 7(����): ");
	scanf("%d", &choice);
	while (choice != 7) {
		switch (choice) {
		case 1: printAllVideo(videoList, videoCount); break;
		case 2: // ���� ���� �߰� ���� �� ���ִٰ� ����
			//printf("Enter video ����: ");
			scanf("%s", title);
			//printf("Enter video ����: ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, title, qty); break;
		case 3:
			//printf("Enter video ����: ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(videoList, videoCount, title)) == -1)
				printf("�׷� ������ �����ϴ�.\n");
			else if (videoList[indexSearched].qty == 0)
				printf("�� �뿩���Դϴ�.\n");
			else
				printf("�뿩 �����մϴ�.\n"); break;
		case 4:
			//printf("Enter video ����: ");
			scanf("%s", title);
			//printf("Enter �� id: ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, title, custId); break;
		case 5:
			printAllRent(rentList, rentCount); break;
		case 6: // �߰�: �ݳ�
			//printf("Enter video ����: ");
			scanf("%s", title);
			//printf("Enter �� id: ");
			scanf("%d", &custId);
			//returnVideo(videoList, videoCount, rentList, &rentCount, title, custId); break; // ���� �������� �ּ� ���
		}
		//printf("1(����������), 2(����), 3(�˻�), 4(�뿩), 5(�뿩������), 6(�ݳ�), 7(����): ");
		scanf("%d", &choice);
	}
}