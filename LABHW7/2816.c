#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int select, num;
    int bin, sum = 0;
    int i = 1; // 1�� �ڸ� ���� ǥ��

    printf("1. 2���� \n");
    printf("2. 8���� \n");
    printf("3. 16���� \n");
    scanf_s("%d", &select);

    printf("�� �Է� : ");
    scanf_s("%d", &num);

    switch (select) {
    case 1:  // 2���� ��ȯ
        while (num > 0) {
            bin = num % 2;
            sum += bin * i;
            num = num / 2;
            i *= 10;  //10�� �ڸ��� ����
        }
        printf("��ȯ�� ���� %d(2����) \n", sum);
        break;
    case 2:  // 8���� ��ȯ
        printf("��ȯ�� ���� %#o(8����) \n", num);
        break;
    case 3:  // 16���� ��ȯ
        printf("��ȯ�� ���� %#x(16����) \n", num);
        break;
    default:
        printf("�߸� �Է��ϼ̽��ϴ�. \n");
        break;
    }
}