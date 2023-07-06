#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char searchKey(char s[], char key);

int main(void)
{
	char key, s[20];
	int i = 0;

	scanf("%s %c", s, &key);

	printf("%d", searchKey(s, key));
}
char searchKey(char s[], char key)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == key)
			break;

	if (s[i] == '\0')
		return -1;
	else
		return i + 1;
}
