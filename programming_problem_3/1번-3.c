#include <stdio.h>

int main(void) {
	int a = 0;
	printf("%p,%llu, %d", &a, (unsigned long long)&a, a);
	return 0;
}