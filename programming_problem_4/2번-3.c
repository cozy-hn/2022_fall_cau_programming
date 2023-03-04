#include <stdio.h>
#include <math.h>

int main(void) {
	int* pa[3];
	int a[3][5] = { 0 };
	for (int i = 0; i < 3; i++) {
		int k = (int)pow(10, i);
		for (int j = 0; j < 5; j++) {
			a[i][j] = (j + 1) * k;
		}
	}
	for (int i = 0; i < 3; i++) {
		pa[i] = a[i];
		for (int j = 0; j < 5; j++) {
			printf("a[%d][%d]=%3d ", i, j, *(pa[i] + j));
		}
		printf("\n");
	}





	/**
	for (int i = 0; i < 3; i++) {
		int k = (int)pow(10, i);
		for (int j = 0; j < 5; j++) {
			a[i][j] = (j + 1) * k;
			printf("a[%d][%d] = %3d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	**/


	return 0;
}