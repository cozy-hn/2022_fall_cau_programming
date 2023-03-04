#include <stdio.h>

int main() {
	int a[] = { 11,22,33,44,55,66 };
	int* p = &a[0];
	int* q = &a[5];
	while (*q >= *p) {
		printf("%d ", *q--);
	
	}






	return 0;
}