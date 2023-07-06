#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mergeString(char c[], char a[], char b[])
{
	/*
	int i, j, temp, minIndex, len = 0, length = 0;

	for (i = 0; a[i] != '\0'; i++) {
		c[i] = a[i];
		len++;
	}

	for (i = 0; b[i] != '\0'; i++) {
		c[i + len] = b[i];
		length = i + len;
	}
	c[length + 1] = '\0';
	
	for (i = 0; c[i] != '\0'; i++) {
		minIndex = i;
		for (j = i + 1; c[j] != '\0'; j++)
			if (c[j] < c[minIndex])
				minIndex = j;

		temp = c[i];
		c[i] = c[minIndex];
		c[minIndex] = temp;
	}

	return 0;
	*/

	int i = 0, j = 0;
	int index = 0;

	while (a[i] != '\0' && b[j] != '\0') {
		if (a[i] < b[i]) {
			c[index++] = a[i];
			i++;
		}
		else {
			c[index++] = b[i];
			j++;
		}
	}

	while (b[j] != '\0') {
		c[index++] = b[j++];
	}

	while (a[j] != '\0') {
		c[index++] = a[i++];
	}

	c[index] = '\0';
	
	return 0;
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}