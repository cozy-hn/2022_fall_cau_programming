#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	typedef struct fraction {
		int denominator; //분모
		int numerator;  //분자
	}fraction;

	fraction a = { 5,4 };
	fraction b = { 7,3 };
	fraction c = { a.denominator * b.denominator ,a.numerator * b.numerator };

	printf("a = %d/%d\n", a.numerator, a.denominator);
	printf("b = %d/%d\n", b.numerator, b.denominator);
	printf("c = a*b= %d/%d\n", c.numerator, c.denominator);







	return 0;
}