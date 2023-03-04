#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//이름 국어 영어 수학 합 평균
//홍길동 70 80 75 sum avg
int main(void) {
	int score[7][7] = {0};

	

	for (int i = 0; i < 5; i++) {

		printf("%d번 학생의 국어 성적은? : ", i+1);
		scanf("%d", &score[i][0]);
		printf("%d번 학생의 영어 성적은? : ", i+1);
		scanf("%d", &score[i][1]);
		printf("%d번 학생의 수학 성적은? : ", i+1);
		scanf("%d", &score[i][2]);
		printf("\n");
	}
	// 학생 당 점수 합, 평균
	for (int i = 0; i < 5; i++) {
		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		score[i][4] = score[i][3] / 3;
	}
	//과목 당 점수 합, 평균
	for (int i = 0; i < 3; i++) {
		score[5][i] = score[0][i] + score[1][i] + score[2][i] + score[3][i] + score[4][i];
		score[6][i] = score[5][i] / 5;
	}
	
	printf("학생 국어 영어 수학 합계 평균\n");

	for (int i = 0; i < 5; i++) {
		printf("%d번 학생,  %d,  %d,  %d,  %d,  %d", i+1, score[i][0], score[i][1], score[i][2], score[i][3], score[i][4]);
		printf("\n");
	}
	
	return 0;
}