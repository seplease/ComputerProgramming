#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int state;
	FILE* fp;

	fp = fopen("hello.out", "wt");
	if (fp == NULL) 	{
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp, "Hello\n");
	fprintf(fp, "Wolrd\n");

	state = fclose(fp);
	if (state != 0) // �� üũ�� ���� ���� 
	{
		printf("file close error!\n");
		return 1;
	}
}