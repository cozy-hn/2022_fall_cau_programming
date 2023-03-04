#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fn_even(int);

int fn_odd(int);

int main(void) {
	printf("정수를 입력하세요 : ");
	int n = 0;
	scanf("%d", &n);
	int tmp=0;
	if (n % 2 == 0) {
		tmp = fn_even(n);
		printf("%d", tmp);
	}

	else if (n % 2 == 1){
		tmp = fn_odd(n);
		printf("%d", tmp);
	}
	


	return 0;
}

int fn_even(int n) {
	if (n == 2) {
		return 2;
	}
	else
		return n+fn_even(n - 2);
}

int fn_odd(int n) {
	if (n == 1) {
		return 1;
	}
	else
		return n + fn_odd(n - 2);
}




