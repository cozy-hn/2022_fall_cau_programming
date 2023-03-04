#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    double h, w;
    int unit;


    printf("신장을 입력해 주세요 : ");
    scanf("%lf", &h);

    printf("신장의 단위를 입력해 주세요 (m이면 1, cm이면 2) : ");
    scanf("%d", &unit);
    if (unit == 1) {
        printf("선택한 신장 단위는 m입니다 \n");
    }
    else if (unit == 2) {
        printf("선택한 신장 단위는 cm입니다 \n");
        h = h / 100;
    }

    printf("몸무게를 입력해주세요(kg) : ");
    scanf("%lf", &w);

    double BMI;
    BMI = (w / (h * h));
    printf("당신의 BMI는 %.2f입니다. \n ", BMI);

    if (BMI >= 40)
    {
        printf("당신은 고도비만 입니다");
    }
    else if (BMI >= 35)
    {
        printf("당신은 중등도 비만 입니다");
    }
    else if (BMI >= 30) {
        printf("당신은 비만입니다");
    }
    else if (BMI >= 25) {
        printf("당신은 과체중입니다");
    }
    else if (BMI >= 18.5) {
        printf("당신은 정상입니다");
    }
    else if (BMI < 18.5) {
        printf("당신은 저체중입니다");
    }


    return 0;
}