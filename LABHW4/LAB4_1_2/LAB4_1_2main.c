#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float g_i = 10.0;
extern float sum(float a, float b);
extern float sum_2(float a, float b);

int main(void)
{
	fprintf(stdout, "��� ����� %f.\n", sum_2(10, 20));
	return 0;
}