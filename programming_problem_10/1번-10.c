#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {

	FILE* fp1;
	FILE* fp2;
	int num_1;
	char name_1[100];
	double score1_1;
	double score2_1;
	double score3_1;
	double sum_1;
	int num_2;
	char name_2[100];
	double score1_2;
	double score2_2;
	double score3_2;
	double sum_2;
	int num_3;
	char name_3[100];
	double score1_3;
	double score2_3;
	double score3_3;
	double sum_3;

	



	if (fopen_s(&fp1, "origin.txt", "r") != 0) {
		printf("file open error1");
		exit(1);
	}
	if (fopen_s(&fp2, "output.txt", "w") != 0) {
		printf("file open error2");
		exit(1);
	}

	fscanf(fp1, "%d %s %lf %lf %lf\n", &num_1, name_1, &score1_1, &score2_1, &score3_1);
	fscanf(fp1, "%d %s %lf %lf %lf\n", &num_2, name_2, &score1_2, &score2_2, &score3_2);
	fscanf(fp1, "%d %s %lf %lf %lf\n", &num_3, name_3, &score1_3, &score2_3, &score3_3);

	sum_1 = score1_1 + score2_1 + score3_1;
	sum_2 = score1_2 + score2_2 + score3_2;
	sum_3 = score1_3 + score2_3 + score3_3;

	fprintf(fp2, "%d %s %.1lf %.1lf %.1lf %.1lf\n", num_1, name_3, score1_3, score2_3, score3_3, sum_3);
	fprintf(fp2, "%d %s %.1lf %.1lf %.1lf %.1lf\n", num_2, name_2, score1_2, score2_2, score3_2, sum_2);
	fprintf(fp2, "%d %s %.1lf %.1lf %.1lf %.1lf\n", num_3, name_1, score1_1, score2_1, score3_1, sum_1);



	fclose(fp1);
	fclose(fp2);



	return 0;
}