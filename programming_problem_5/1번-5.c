#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[100];
	char temp;
	char* delimiter = " ";
	int len;
	printf("�� ���� ���� ���ڿ��� �Է��Ͻÿ� : ");
	gets(s1);
	char* ptoken = strtok(s1, delimiter);

	while (ptoken) {
		len = strlen(ptoken);
		for (int i = 0; i < len/2; i++) {
			temp = ptoken[i];
			ptoken[i] = ptoken[len - i - 1];
			ptoken[len - i - 1] = temp;

		}
		printf("%s ", ptoken);
		ptoken = strtok(NULL, delimiter);
		
	}
	



	return 0;
}
