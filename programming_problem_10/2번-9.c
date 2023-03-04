#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE* fp1;
	FILE* fp2;
	char line[80];
	int i=0;
	if (fopen_s(&fp1, "comma_separated.txt", "r") != 0) {
		printf("file open error1");
		exit(1);
	}
	if (fopen_s(&fp2, "blank_separated.txt", "w") != 0) {
		printf("file open error2");
		exit(1);
	}

	
	fgets(line, sizeof(line), fp1);

	while (i < 80) {
		if (line[i] == ',') {
			line[i] = ' ';
		}

		i++;
	}
	fputs(line, fp2);
	




	fclose(fp1);
	fclose(fp2);





	
	return 0;
}