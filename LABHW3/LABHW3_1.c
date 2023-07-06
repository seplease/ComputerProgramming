#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("합은 %d\n", sumList(list, 10));

	printf("가장 큰 수는 %d\n", maxList(list, 10));

	printf("탐색할 값은? ");
	scanf("%d", &value);

	// value 가 list 에 있는가를 판별하여 "없다" 혹은 "**째에 있다"를 출력
	keyIndex = indexSearch(list, 10, value);

	if (keyIndex == -1)
		printf("없습니다");
	else
		printf("값 %d를 갖는 첫번째 값은 %d번째에 있습니다", value, keyIndex + 1);

	return 0;
}
//sumList 의 정의
int sumList(int arr[], int size)
{
	int i, total = 0;

	for (i = 0; i < size; i++)
		total += arr[i];

	return total;
}
// 가장 큰 값을 반환한다. 
int maxList(int arr[], int size)
{
	int max = 0, i;

	for (i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;

}
//key 가 없으면 -1 을 있으면 그 인덱스를 반환한다. 
int indexSearch(int arr[], int size, int key)
{
	int i, flag = 0;

	if (flag == 0)
	for (i = 0; i < size; i++) {
		if (arr[i] == key && flag == 0)
		{
			flag = 1;
			return i;
		}
	}
	return -1;
}