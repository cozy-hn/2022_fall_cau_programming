#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    double h, w;
    int unit;


    printf("������ �Է��� �ּ��� : ");
    scanf("%lf", &h);

    printf("������ ������ �Է��� �ּ��� (m�̸� 1, cm�̸� 2) : ");
    scanf("%d", &unit);
    if (unit == 1) {
        printf("������ ���� ������ m�Դϴ� \n");
    }
    else if (unit == 2) {
        printf("������ ���� ������ cm�Դϴ� \n");
        h = h / 100;
    }

    printf("�����Ը� �Է����ּ���(kg) : ");
    scanf("%lf", &w);

    double BMI;
    BMI = (w / (h * h));
    printf("����� BMI�� %.2f�Դϴ�. \n ", BMI);

    if (BMI >= 40)
    {
        printf("����� ���� �Դϴ�");
    }
    else if (BMI >= 35)
    {
        printf("����� �ߵ �� �Դϴ�");
    }
    else if (BMI >= 30) {
        printf("����� ���Դϴ�");
    }
    else if (BMI >= 25) {
        printf("����� ��ü���Դϴ�");
    }
    else if (BMI >= 18.5) {
        printf("����� �����Դϴ�");
    }
    else if (BMI < 18.5) {
        printf("����� ��ü���Դϴ�");
    }


    return 0;
}