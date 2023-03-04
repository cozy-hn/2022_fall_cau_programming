#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct worldCup {
	int year;
	char gametype[30];
	char country1[30];
	char country2[30];
	int score1;
	int score2;
	char explanation[100];
	int attendance;
}worldCup;

int main() {
	char inputstr[100];
	int inputint;
	int cnt;
	char fname[] = "WorldCupMatches.dat";
	FILE* f;
	int size;
	if ((f = fopen(fname, "rb")) == NULL) {
		printf("FILEOPEN ERROR");
		exit(1);
	}
	else {
		fseek(f, 0L, SEEK_END);
		size = ftell(f);
		//printf("%d\n", size/sizeof(worldCup));
		rewind(f);
	}

	
	worldCup* worldcup = NULL;
	if ((worldcup = (worldCup*)malloc(size)) == NULL) {
		printf("MEMORY ALLOCATION ERROR");
		exit(1);
	}

	for (int i = 0; i < size / sizeof(worldCup); i++) {
		fread(worldcup + i, sizeof(worldCup), 1, f);
		//printf("%d,%s,%s,%s,%d,%d,%s,%d\n", worldcup[i].year, worldcup[i].gametype, worldcup[i].country1, \
			worldcup[i].country2, worldcup[i].score1, worldcup[i].score2, worldcup[i].explanation, worldcup[i].attendance);
	}

	fclose(f);


	while (1) {
		printf("Write your command >> ");
		scanf("%s", inputstr);
		if (!strcmp(inputstr, "exit")) {
			break;
		}
		else if (!strcmp(inputstr, "searchNation")) {
			printf("Which country do you want to search? >> ");
			scanf("%s", inputstr);
			if (!strcmp(inputstr, "all")) {
				FILE* fp = fopen("search_result.csv", "w");
				fprintf(fp, "%s,%s,%s,%s,%s,%s,%s,%s\n", "Year", "Game Type", "Country 1", \
					"Country 1", "Score 1", "Score 2", "Explanation", "Attendance");
				for (int i = 0; i < size / sizeof(worldCup); i++) {
					fprintf(fp, "%d,%s,%s,%s,%d,%d,%s,%d\n", worldcup[i].year, worldcup[i].gametype, worldcup[i].country1, \
						worldcup[i].country2, worldcup[i].score1, worldcup[i].score2, worldcup[i].explanation, worldcup[i].attendance);
				}
				//printf("Complete\n");
				fclose(fp);
			}
			else {
				int cnt = 0;
				FILE* fp = fopen("search_result.csv", "w");
				fprintf(fp, "%s,%s,%s,%s,%s,%s,%s,%s\n", "Year", "Game Type", "Country 1", \
					"Country 1", "Score 1", "Score 2", "Explanation", "Attendance");
				for (int i = 0; i < size / sizeof(worldCup); i++) {
					if (!strcmp(inputstr, worldcup[i].country1) || !strcmp(inputstr, worldcup[i].country2)) {
						fprintf(fp, "%d,%s,%s,%s,%d,%d,%s,%d\n", worldcup[i].year, worldcup[i].gametype, worldcup[i].country1, \
							worldcup[i].country2, worldcup[i].score1, worldcup[i].score2, worldcup[i].explanation, worldcup[i].attendance);
						cnt++;
					}
				}
				fclose(fp);
				if (cnt == 0) {
					printf("There is no game including this country.\n");
					remove("search_result.csv");
				}
			}
		}
		else if (!strcmp(inputstr, "attendCount")) {
			cnt = 0;
			printf("What is the lower limit for attendance? >> ");
			scanf("%s", &inputstr);
			int isnpint = 0;//예회처리용
			for (int i = 0; i < strlen(inputstr); i++) {
				if (isdigit(inputstr[i])==0) {
					printf("Invalid input\n");
					isnpint = 1;
					break;
				}
			}
			if (isnpint == 0) inputint = atoi(inputstr);
			if (isnpint == 0 &&inputint < 0) {
				isnpint = 1;
				printf("Invalid input\n");
			}
			if (isnpint == 0) {
				int cnt = 0;
				FILE* fp = fopen("attend_result.csv", "w");
				fprintf(fp, "%s,%s,%s,%s,%s,%s,%s,%s\n", "Year", "Game Type", "Country 1", \
					"Country 1", "Score 1", "Score 2", "Explanation", "Attendance");
				for (int i = 0; i < size / sizeof(worldCup); i++) {
					if (worldcup[i].attendance >= inputint) {
						fprintf(fp, "%d,%s,%s,%s,%d,%d,%s,%d\n", worldcup[i].year, worldcup[i].gametype, worldcup[i].country1, \
							worldcup[i].country2, worldcup[i].score1, worldcup[i].score2, worldcup[i].explanation, worldcup[i].attendance);
						cnt++;
					}
				}
				fclose(fp);
				if (cnt == 0) {
					printf("There is no corresponding game.\n");
					remove("attend_result.csv");
				}
			}
		}
		else if (!strcmp(inputstr, "goalDiff")) {
			cnt = 0;
			printf("Goal difference? >> ");
			scanf("%s", &inputstr);
			int isnpint = 0;
			for (int i = 0; i < strlen(inputstr); i++) {
				if (isdigit(inputstr[i]) == 0) {
					printf("Invalid input\n");
					isnpint = 1;
					break;
				}
			}
			if (isnpint == 0) inputint = atoi(inputstr);

			if (isnpint == 0 && inputint < 0) {
				isnpint = 1;
				printf("Invalid input\n");
			}
			if (isnpint == 0) {
				int cnt = 0;
				FILE* fp = fopen("diff_result.csv", "w");
				fprintf(fp, "%s,%s,%s,%s,%s,%s,%s,%s\n", "Year", "Game Type", "Country 1", \
					"Country 1", "Score 1", "Score 2", "Explanation", "Attendance");
				for (int i = 0; i < size / sizeof(worldCup); i++) {
					if (abs(worldcup[i].score1 - worldcup[i].score2) == inputint) {
						fprintf(fp, "%d,%s,%s,%s,%d,%d,%s,%d\n", worldcup[i].year, worldcup[i].gametype, worldcup[i].country1, \
							worldcup[i].country2, worldcup[i].score1, worldcup[i].score2, worldcup[i].explanation, worldcup[i].attendance);
						cnt++;
					}
				}
				fclose(fp);
				if (cnt == 0) {
					printf("There is no corresponding game.\n");
					remove("diff_result.csv");
				}
			}
		}
		else {
			printf("Invalid command\n");
		}
	}
	return 0;
}
	//함수 안써도 패널티 없는지 확인