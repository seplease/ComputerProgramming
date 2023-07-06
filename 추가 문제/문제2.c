#include <stdio.h>
#include <ctype.h>
int solution(char s[])
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
		len = i;

	for (i = 0, j = len - 1; i < len / 2; i++, j--)
		if (tolower(s[i]) != tolower(s[j]))
			return 0;

	return 1;
}