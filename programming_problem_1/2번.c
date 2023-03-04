// 입력받은 정수에서 가각의 자리에 해당하는 수를 반대로 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    printf("입력 받을 정수를 적어주세요 : ");
    scanf("%d", &num);

    while (num % 10 == 0) {
        num /=10 ;
    }

    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);



    return 0;


}