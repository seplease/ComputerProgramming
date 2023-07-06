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
	struct student* sp = s;
	int i;
	int midAvg = 0, finAvg = 0;

	for (i = 0; i < 3; i++, sp++) {
		printf("Enter student name: ");
		scanf("%s", sp->name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->midterm, &sp->final);
		sp->average = (sp->midterm + sp->final) / 2;
		midAvg += sp->midterm;
		finAvg += sp->final;
	}
	midAvg /= 3;
	finAvg /= 3;

	sp = s;
	for (i = 0; i < 3; i++, sp++)
		sp->average = (sp->midterm + sp->final) / 2;

	sp = s;
	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++, sp++)
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);

	sp = s;
	for (i = 0; i < 3; i++, sp++) {
		if (sp->average >= 80)
			sp->grade = 'A';
		else if (50 <= sp->average && sp->average < 80)
			sp->grade = 'B';
		else if (sp->average <= 50)
			sp->grade = 'F';
	}

	sp = s;
	printf("\n이름\t학점\n");
	for (i = 0; i < 3; i++, sp++)
		printf("%s\t%c\n", sp->name, sp->grade);

	printf("\n중간고사의 평균 = %d\n", midAvg);
	printf("기말고사의 평균 = %d\n", finAvg);
}