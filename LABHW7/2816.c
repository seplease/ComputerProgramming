#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int select, num;
    int bin, sum = 0;
    int i = 1; // 1의 자리 숫자 표현

    printf("1. 2진수 \n");
    printf("2. 8진수 \n");
    printf("3. 16진수 \n");
    scanf_s("%d", &select);

    printf("값 입력 : ");
    scanf_s("%d", &num);

    switch (select) {
    case 1:  // 2진수 변환
        while (num > 0) {
            bin = num % 2;
            sum += bin * i;
            num = num / 2;
            i *= 10;  //10의 자리씩 곱함
        }
        printf("변환한 값은 %d(2진수) \n", sum);
        break;
    case 2:  // 8진수 변환
        printf("변환한 값은 %#o(8진수) \n", num);
        break;
    case 3:  // 16진수 변환
        printf("변환한 값은 %#x(16진수) \n", num);
        break;
    default:
        printf("잘못 입력하셨습니다. \n");
        break;
    }
}