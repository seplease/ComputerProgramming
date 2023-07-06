#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ('A' <= s[i] && s[i] <= 'I')
			e[j++] = s[i] - 16;
		else if ('J' <= s[i] && s[i] <= 'S')
		{
			e[j++] = '1';
			e[j++] = s[i] - 26;
		}
		else if ('T' <= s[i] && s[i] <= 'Z')
		{
			e[j++] = '2';
			e[j++] = s[i] - 36;
		}
	}
	e[j++] = '\0';
}
int main(void)
{
	char sentence[20], encoded[40];

	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);
}