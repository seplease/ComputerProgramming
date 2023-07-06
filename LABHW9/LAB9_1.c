#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h> 
#include <ctype.h> //문자처리 함수 사용을 위해
#include <conio.h>
void main()
{
	char c;

	printf("Enter 문자열(q이전까지 문자열로 인정함)\n");

	c = getchar();

	while (!(c == 'q'))
	{
		putchar(c);

		c = getchar();
	}
	while (getchar() != '\n'); //버퍼비움

	printf("\n----------------------------------------------------------\n");
	printf("Enter 두번째 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);

		c = getchar();
	}
	putchar('\n');
}