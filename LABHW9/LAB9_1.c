#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h> 
#include <ctype.h> //����ó�� �Լ� ����� ����
#include <conio.h>
void main()
{
	char c;

	printf("Enter ���ڿ�(q�������� ���ڿ��� ������)\n");

	c = getchar();

	while (!(c == 'q'))
	{
		putchar(c);

		c = getchar();
	}
	while (getchar() != '\n'); //���ۺ��

	printf("\n----------------------------------------------------------\n");
	printf("Enter �ι�° ���ڿ�(q�������� ���ڿ��� ������)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);

		c = getchar();
	}
	putchar('\n');
}