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

	char* tag[] = { "�̸�", "�й�", "�������", "�а�", "����\n" };
	student s1[] = { {"1��",20110101,3.1,"�İ�1","����1"}, {"2��",20220202,3.2,"�İ�2","����2"} , {"3��",20330303,3.3,"�İ�3","����3"} , {"4��",20440404,3.4,"�İ�4","����4"} , {"5��",20550505,3.5,"�İ�5","����5"} };
	printf("%5s %8s %10s %5s %9s", tag[0], tag[1], tag[2], tag[3], tag[4]);
	printf("==============================================\n");
	for (int i = 0; i < 5; i++) {
		printf("%5s %10d %5lf %7s %7s\n", s1[i].name, s1[i].id, s1[i].avgscore, s1[i].dep, s1[i].targ);
	}




	return 0;
}