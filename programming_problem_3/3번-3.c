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
	printf("최솟값은 %lf, 인덱스는 %d 입니다", min, idx);




	return 0;
}