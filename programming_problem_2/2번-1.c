#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

double round_cir(double);
double area_cir(double);

int main(void) {
	double r = 0;
	printf("���ϰ��� �ϴ� ���� ��������? :");
	scanf("%lf", &r);
	double round = round_cir(r);
	double area = area_cir(r);
	printf("���� �ѷ� %lf \n", round);
	printf("���� ���� %lf", area);



}

double round_cir(double r) {
	double round = 2 * PI * r;
	return round;
}
double area_cir(double r) {
	double area = PI * r* r;
	return area;
}



