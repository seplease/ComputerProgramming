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

	printf("주민등록번호 입력<'-'포함>:");
	fgets(string, 15, stdin);
	strncat(birth, string, 2);
	printf("당신은 %s년도 생이군요\n", birth);
	idFront = strtok(string, "-");
	gender = strtok(NULL, "\0");

	if (gender[0] == '1') {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.", atoi(birth) + 77);
	}
	if (gender[0] == '2') {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.", atoi(birth) + 84);
	}
	/*
	printf("주민등록번호 입력<'-'포함>:");
	gets(id);

	strcpy(birthYear, "19");
	strncat(birthYear, id, 2);
	year = atoi(birthYear);

	printf("당신은 %s년도 생이군요\n", birthYear);

	if (id[7] == '2') {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다")
	}
	else {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다")
	}
	*/
}