#define _CRT_SECURE_NO_WARNINGS
struct customer {
	char name[40];
	int age;
};

#include <stdio.h> 
#include <string.h> 
int main(void)
{
	struct customer aCustomer;
	struct customer cArray[2] = { {"�嵿��", 38}, {"���ҿ�", 38} };
	strcpy(aCustomer.name, "�ڼ���");
	aCustomer.age = 36;
	int i;

	printf("Name = %s, Age = %d\n", aCustomer.name, aCustomer.age);
	for (i = 0; i < 2; i++)
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
}