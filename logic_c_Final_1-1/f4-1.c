#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if ('A' <= s[i] && s[i] <= 'I')
			e[i] = s[i] - 16; // ����'A'�� �ƽ�Ű�� 65, ����'0'�� �ƽ�Ű�� 49
	e[i] = '\0';
}
int main(void)
{
	char sentence[20], encoded[40];

	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);
}