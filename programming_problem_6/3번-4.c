#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s2[100];
	printf("문장을 입력하세요 :");
	gets(s2);
	int len;
	int i = 0;
	if(s2[0]!=' ') {
		len = strlen(s2);
		while (s2[len - 1] == ' ') {
			s2[len - 1] = '\0';
			len--;
		}
		printf("%s\n", s2);
		printf("%d", strlen(s2));
	}
	else{

		while (s2[i] == ' ') {
			s2[i] = '\0';
			i++;
		}

		len = strlen(s2 + i);
		while ((s2+i)[len - 1] == ' ') {
			(s2 + i)[len-1] = '\0';
			len--;
		}
		printf("%s\n", s2+i);
		printf("%d", strlen(s2+i));
	}
	

	return 0;
}