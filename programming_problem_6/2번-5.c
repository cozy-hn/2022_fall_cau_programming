#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	char s1[100] ;
	int len;
	printf("문자열을 입력하세요 :");
	gets(s1);
	s1[0] = toupper(s1[0]);
	len=strlen(s1);
	//printf(len);

	if (s1[len-1] != '.') {
		s1[len] = '.';
		s1[len + 1] = '\0';
	}
	
	printf("%s", s1);


	return 0;
}