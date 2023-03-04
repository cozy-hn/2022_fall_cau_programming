#include <stdio.h>

void arraymerge(int* a, int an, int* b, int bn, int* c);

int main() {
	int a[] = { 1, 2, 5, 7, 9, 14};
	int b[] = { 2, 3, 6, 8, 13,20 ,21 ,21 ,24};
	int an = sizeof(a) / sizeof(int);
	int bn = sizeof(b) / sizeof(int);
	int c[100] = { 0 };
	arraymerge(a, an, b, bn, c);
	return 0;
}

void arraymerge(int* a, int an, int* b, int bn, int* c) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (k < an + bn) {
		if (i >=an) {
			c[k] = b[j];
			k++;
			j++;
		}
		else if (j >= bn) {
			c[k] = a[i];
			k++;
			i++;
		}
		else if (a[i] < b[j]) {
			c[k] = a[i];
			k++;
			i++;
		}
		else if (a[i] > b[j]) {
			c[k] = b[j];
			k++;
			j++;
		}
		else {
			c[k] = a[i];
			k++;
			i++;
			c[k] = b[j];
			k++;
			j++;
		}
	}

	for (int i = 0; i < an + bn; i++) {
		printf("%d ", c[i]);
	}






/**	for (int i = 0; i < an; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < bn; i++) {
		c[an + i] = b[i];
	}
	int tmp;
	for (int i = 0; i < an + bn; i++) {
		for (int j = 0; j < an + bn - i - 1; j++) {
			if (c[j] > c[j + 1]) {

				tmp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < an + bn; i++) {
		printf("%d ", c[i]);
	}**/
}
