// �Է¹��� �������� ������ �ڸ��� �ش��ϴ� ���� �ݴ�� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    printf("�Է� ���� ������ �����ּ��� : ");
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