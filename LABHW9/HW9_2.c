#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 
int main(void)
{
	char string[50];
	char birth[50] = "19";
	char* idFront;
	char *gender;

	printf("�ֹε�Ϲ�ȣ �Է�<'-'����>:");
	fgets(string, 15, stdin);
	strncat(birth, string, 2);
	printf("����� %s�⵵ ���̱���\n", birth);
	idFront = strtok(string, "-");
	gender = strtok(NULL, "\0");

	if (gender[0] == '1') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.", atoi(birth) + 77);
	}
	if (gender[0] == '2') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.", atoi(birth) + 84);
	}
	/*
	printf("�ֹε�Ϲ�ȣ �Է�<'-'����>:");
	gets(id);

	strcpy(birthYear, "19");
	strncat(birthYear, id, 2);
	year = atoi(birthYear);

	printf("����� %s�⵵ ���̱���\n", birthYear);

	if (id[7] == '2') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�")
	}
	else {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�")
	}
	*/
}