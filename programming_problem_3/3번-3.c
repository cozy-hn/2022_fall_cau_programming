#include <stdio.h>

int main(void) {
	double arr[5] = { 3,4,78,12,1 };
	double min = *arr;
	int i, idx=0;
	for (i = 1; i < 5; i++) {
		if (*arr >= *(arr + i)) {
			min = *(arr + i);
			idx = i;
		}
	}
	printf("�ּڰ��� %lf, �ε����� %d �Դϴ�", min, idx);




	return 0;
}