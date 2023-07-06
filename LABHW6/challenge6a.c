#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*
	char firWord[81], secWord[81];
	int i, firSum = 0, secSum = 0;

	printf("Enter the first word: ");
	scanf("%s", firWord);
	printf("Enter the second word: ");
	scanf("%s", secWord);


	for (i = 0; firWord[i] != '\0'; i++)
		firSum += firWord[i];

	for (i = 0; secWord[i] != '\0'; i++)
		secSum += secWord[i];

	if (firSum == secSum)
		printf("두 단어는 같다");
	else
		printf("두 단어는 다르다");
	*/
	char str1[81], str2[81];
	int length1, length2, i;

	for (length1 = 0; str1[length1] != '\0'; length1++)
		for (length2 = 0; str2[length2] != '\0'; length2++)

			if (length1 == length2) {
				for (i = 0; str1[i] != '\0'; i++) {
					if (str1[i] != str2[i]) {
						printf("두 단어는 다르다\n");
						break;
					}
				}
				printf("두 단어는 같다\n");
			}
			else
				printf("두 단어는 다르다\n");
	/*
	for (i = 0; (str1[i] != '\0') || (str2[i] != '\0'); i++)
		if (str1[i] != str2[i])
			same = 0;

	if (same)
		printf("두 단어는 같다\n");
	else
		printf("두 단어는 다르다\n");
	*/
}