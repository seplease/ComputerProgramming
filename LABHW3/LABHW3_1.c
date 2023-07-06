#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("���� %d\n", sumList(list, 10));

	printf("���� ū ���� %d\n", maxList(list, 10));

	printf("Ž���� ����? ");
	scanf("%d", &value);

	// value �� list �� �ִ°��� �Ǻ��Ͽ� "����" Ȥ�� "**°�� �ִ�"�� ���
	keyIndex = indexSearch(list, 10, value);

	if (keyIndex == -1)
		printf("�����ϴ�");
	else
		printf("�� %d�� ���� ù��° ���� %d��°�� �ֽ��ϴ�", value, keyIndex + 1);

	return 0;
}
//sumList �� ����
int sumList(int arr[], int size)
{
	int i, total = 0;

	for (i = 0; i < size; i++)
		total += arr[i];

	return total;
}
// ���� ū ���� ��ȯ�Ѵ�. 
int maxList(int arr[], int size)
{
	int max = 0, i;

	for (i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;

}
//key �� ������ -1 �� ������ �� �ε����� ��ȯ�Ѵ�. 
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