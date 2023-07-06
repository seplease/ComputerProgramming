#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution1(char* s) // 코드 작성
{
	char str1;
	char str2;
	int sum = 0;

	strncat(str1, s, 2);
	str2 = strtok(NULL, "\0");
	strncat(str2, str2, 2);

	sum = atoi(str1) + atoi(str2);
	printf("%d", sum);
}

int main(void) // 변경하지 말라
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", solution1(s));

	return 0;
}