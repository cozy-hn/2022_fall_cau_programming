#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�̸� ���� ���� ���� �� ���
//ȫ�浿 70 80 75 sum avg
int main(void) {
	int score[7][7] = {0};

	

	for (int i = 0; i < 5; i++) {

		printf("%d�� �л��� ���� ������? : ", i+1);
		scanf("%d", &score[i][0]);
		printf("%d�� �л��� ���� ������? : ", i+1);
		scanf("%d", &score[i][1]);
		printf("%d�� �л��� ���� ������? : ", i+1);
		scanf("%d", &score[i][2]);
		printf("\n");
	}
	// �л� �� ���� ��, ���
	for (int i = 0; i < 5; i++) {
		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		score[i][4] = score[i][3] / 3;
	}
	//���� �� ���� ��, ���
	for (int i = 0; i < 3; i++) {
		score[5][i] = score[0][i] + score[1][i] + score[2][i] + score[3][i] + score[4][i];
		score[6][i] = score[5][i] / 5;
	}
	
	printf("�л� ���� ���� ���� �հ� ���\n");

	for (int i = 0; i < 5; i++) {
		printf("%d�� �л�,  %d,  %d,  %d,  %d,  %d", i+1, score[i][0], score[i][1], score[i][2], score[i][3], score[i][4]);
		printf("\n");
	}
	
	return 0;
}