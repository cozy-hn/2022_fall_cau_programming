#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void printvar(char *szTypes, ...);

int main() {
	printvar("dscfd", 12, "pi", 'p', 3.14, 5);
	return 0;
}


void printvar(char *szTypes, ...){
	int i=0;
	va_list ap;
	va_start(ap, szTypes);
	while (szTypes[i] != '\0') {
		if (szTypes[i] == 's'){
			char* str = va_arg(ap, char*);
			printf("%s ", str);
		}
		else if (szTypes[i] == 'c') {
			char c = va_arg(ap, char);
			printf("%c ", c);
		}
		else if (szTypes[i] == 'f') {
			double f = va_arg(ap, double);
			printf("%5lf ", f);
		}
		else if (szTypes[i] == 'd') {
			int d = va_arg(ap, int);
			printf("%d ", d);
		}
		else {
			printf("\n error program exit");
			exit(0);
		}
		i++;

	}

	va_end(ap);
	return 0;
}