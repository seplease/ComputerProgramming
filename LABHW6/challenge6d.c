#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
// Palindrome �˻�
#include <stdio.h>
BOOL isPalindrome(char str[]);
int main(void)
{
	char str[MAX_STRING];
	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);
	if (isPalindrome(str)) // Palindrome �˻�
		printf("\"%s\" is a Palindrome\n\n", str); // "�� ����Ϸ��� \"�� ���
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}
BOOL isPalindrome(char s[])
{
	//���ڿ� s��(����� s�� ������������, �̴� 2�б⶧ ����)
	//üũ�ؼ� palindrome�̸� TRUE���� palindrome�ƴϸ� FALSE���� return�Ѵ�.
	int len = 0;
	int i = 0;

	for (len = 0; s[len]; len++);
		for (i = 0; i < (len / 2); i++)
			if (s[i] != s[len - i - 1])
				return 0;
		return 1;
}