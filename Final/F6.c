#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct student {
	char no[5];     //추가 : 학번 
	char name[20];
	int midterm;
	int final;
	char grade; // 변경
} Student;

typedef struct cClass {
	int num;
	Student s[40];
} CClass;

void readClass(CClass* cp) // 코드 작성
{
	for (int i = 0; i < cp->num; i++)
		scanf("%s %s %d %d", cp->s[i].no, cp->s[i].name, &cp->s[i].midterm, &cp->s[i].final);
}

void printStudent(Student* sp) // 변경하지 말라
{
	printf("%s %s %d %d %c\n", sp->no, sp->name, sp->midterm, sp->final, sp->grade);  //학번 추가
}

void printClass(CClass* cp) // 변경하지 말라
{
	int i;
	for (i = 0; i < cp->num; i++)
		printStudent(&cp->s[i]);
}

void calculateClassGrade(CClass* cp) // 코드 작성
{
	for (int i = 0; i < cp->num; i++) {
		if ((cp->s[i].midterm + cp->s[i].final) / 2 >= 50)
			cp->s[i].grade = 'A';
		else
			cp->s[i].grade = 'F';
	}
}

int AStudents(CClass* cp) // 코드 작성
{
	int count = 0;
	for (int i = 0; i < cp->num; i++) {
		if (cp->s[i].grade == 'A') {
			printf("%s %s %d %d %c\n", cp->s[i].no, cp->s[i].name, cp->s[i].midterm, cp->s[i].final, cp->s[i].grade);
			count++;
		}
	}
	return count;
}

int main(void) // 변경하지 말라
{
	CClass c2;

	// printf("Enter a number of student:");
	scanf("%d", &c2.num);
	readClass(&c2);

	calculateClassGrade(&c2);
	printf("%d\n", AStudents(&c2)); // 추가
}