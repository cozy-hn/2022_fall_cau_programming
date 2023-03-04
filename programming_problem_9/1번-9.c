#include <stdio.h>

void pascaltriangle(int(*p)[10], int size);
void triangleprint(int(*p)[10], int size);


int main() {
	int pascal[10][10]={0,};
	pascaltriangle(pascal, 10);
	triangleprint(pascal, 10);


	return 0;
}

void pascaltriangle(int(*p)[10], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (j == 0 || i == j) {
				*(* (p + i) + j) = 1; //*(p+i)[j]
				break;
			}
			else {
				*(* (p + i) + j) = *( * (p + i - 1)+j) + *( * (p + i - 1)+(j - 1));
			}
		}
	}
}

void triangleprint(int(*p)[10], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				printf("%3d \n", *(* (p + i) + j));
				break;
			}
			else {
				printf("%3d ", *(* (p + i)+j));
			}
		}
	}
}