#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	typedef struct student {
		char* name;
		int id;
		double avgscore;
		char* dep;
		char* targ;
	}student;

	char* tag[] = { "이름", "학번", "평균평점", "학과", "진로\n" };
	student s1[] = { {"1번",20110101,3.1,"컴공1","진로1"}, {"2번",20220202,3.2,"컴공2","진로2"} , {"3번",20330303,3.3,"컴공3","진로3"} , {"4번",20440404,3.4,"컴공4","진로4"} , {"5번",20550505,3.5,"컴공5","진로5"} };
	printf("%5s %8s %10s %5s %9s", tag[0], tag[1], tag[2], tag[3], tag[4]);
	printf("==============================================\n");
	for (int i = 0; i < 5; i++) {
		printf("%5s %10d %5lf %7s %7s\n", s1[i].name, s1[i].id, s1[i].avgscore, s1[i].dep, s1[i].targ);
	}




	return 0;
}