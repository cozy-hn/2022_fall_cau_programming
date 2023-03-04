#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(double*, double, double);
void sub(double*, double, double);
void mult(double*, double, double);
void devi(double*, double, double);

int main() {
	int n;
	double a, b,result;
	char op[4] = { '+','-','*','/' };
	void(*fpary[4])(double*, double, double) = { add,sub,mult,devi };
	printf("what operation do you want perform? (add : 0 ,substract : 1, multiply : 2, devide : 3 >> ");
	scanf("%d", &n);
	printf("write two real number ");
	scanf("%lf %lf", &a, &b);
	fpary[n](&result, a, b);
	printf("%lf %c %lf = %lf", a, op[n], b, result);



	return 0;
}

void add(double* c, double a, double b) {
	*c = a + b;
}
void sub(double* c, double a, double b) {
	*c = a - b;
}
void mult(double* c, double a, double b) {
	*c = a * b;
}
void devi(double* c, double a, double b) {
	*c = a / b;
}