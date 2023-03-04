#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int line;
    printf("만들고 싶은 피라미드 줄 수 : ");
    scanf("%d", &line);
    char s1[10];
    int num = 2 * line - 1;
    for (int i = 0; i <= num - 1; i++) {
        s1[i] = ' ';
    }
    s1[(num/2)] = '0';
    char ch= 48;
    int i, j;
    for (i = 0; i <= line - 1; i++) {
        for (j = 0; j <= i; j++) {     
            ch += j;
            s1[(num / 2) - j] = ch;
            s1[(num / 2) + j] = ch;
            ch = 48;
            
        }
        s1[(num / 2) + j] = NULL;
        printf("%s\n", s1);

    }

    return 0;


}