#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int isHalfSame(char* p1, char* p2) // 코드 작성
{
	int i, j, len;

	for (i = 0; *p1 != '\0'; i++)
		len = i;

	for (i = 0, j = len - 1; i < len / 2; p1++, p2--)
		if (*p1 != *p2)
			return 0;

	return 1;
}
int main(void) // 변경하지 말라
{
	char str1[20], str2[20];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%s", str1);
		scanf("%s", str2);
		printf("%d\n", isHalfSame(str1, str2));
	}
}