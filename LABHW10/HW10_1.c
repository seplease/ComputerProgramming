#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};

int main(void)
{
	struct student s[3];
	int i;
	int midAvg = 0, finAvg = 0;

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
		s[i].average = (s[i].midterm + s[i].final) / 2;
		midAvg += s[i].midterm;
		finAvg += s[i].final;
	}
	midAvg /= 3;
	finAvg /= 3;

	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++)
		printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);

	for (i = 0; i < 3; i++) {
		if (s[i].average >= 80)
			s[i].grade = 'A';
		else if (50 <= s[i].average && s[i].average < 80)
			s[i].grade = 'B';
		else if (s[i].average <= 50)
			s[i].grade = 'F';
	}

	printf("\n이름\t학점\n");
	for (i = 0; i < 3; i++)
		printf("%s\t%c\n", s[i].name, s[i].grade);

	printf("\n중간고사의 평균 = %d\n", midAvg);
	printf("기말고사의 평균 = %d\n", finAvg);
}