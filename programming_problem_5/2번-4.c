#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[100];
	int len;
	printf("한 줄의 영어 문자열을 입력하시오 : ");
	gets(s1);
	len = strlen(s1);
	for (int i=0; i < len; i++) {
		if ((s1[i]>='a') && (s1[i] <= 'z')) {
			s1[i]=s1[i]-32;
		}
		else if ((s1[i] >= 'A') && (s1[i] <= 'Z')) {
			s1[i] = s1[i] + 32;
		}
	}
	printf("%s", s1);




	return 0;
}
