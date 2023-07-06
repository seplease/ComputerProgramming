#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void print_array(int pa[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			printf("%d ", *(pa[i] + j));
}

int max_array(int pa[][3], int size)
{
	int i, j, max;

	max = INT_MIN;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			if (*(pa[i] + j) > max)
				max = *(pa[i] + j);

	return max;
}

int sum_array(int pa[][3], int size)
{
	int i, j, sum = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			sum += *(pa[i] + j);
	return sum;
}

int main(void)
{
	int k;
	int* p;
	int sum;

	int array[4][3];

	p = array;
	srand(time(NULL));

	for (k = 0; k < 12; k++)
		*p++ = rand() % 100;

	int rowNb = sizeof(array) / sizeof(array[0]);
	print_array(array, rowNb);
	printf("\n가장 큰 값은 %d\n", max_array(array, rowNb));
	printf("엘리먼트들의 합은 %d\n", sum_array(array, rowNb));
}