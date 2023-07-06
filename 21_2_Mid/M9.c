#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_word_in_word(char w1[], int start)
{
	int i;
	int j;
	int n;

	for (i = 0; w1[i] != '\0'; i++)
		if (w1[i] != w1[i] + 1)
			return 0;

	return 1;
}

int main(void)
{
	char passwd[20];
	int i;

	scanf("%s", &passwd);

	for (i = 0; passwd[i] != '\0'; i++)
		printf("%d", is_word_in_word(passwd, i));
}