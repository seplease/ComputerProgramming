#include <stdio.h> 
#include <stdlib.h>
void print_array(int pa[][3], int size) {
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			printf("%d ", *(pa[i] + j));
}

int max_array(int pa[][3], int size)
{
	int i, j, max;
	// 여기에 코드 삽입
	max = INT_MIN; //#include <stdlib.h> 필요

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			if (*(pa[i] + j) > max)
				max = *(pa[i] + j);

	return max;
}

int main(void)
{
	int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);
	print_array(array, rowNb);
	printf("\n가장 큰 값은 %d\n", max_array(array, rowNb));
}