#include <stdio.h>
int main_3() {
	
	char* ptrT;
	char text[] = "MON TUE WEN THI FRI SAT SUN"; 
	printf("%s\n", text);

	ptrT = text;  // &text[0];
	printf("%s\n", ptrT);
	printf("%c\n", text[4]);
	printf("%c\n", *(ptrT+4));

	printf("%p\n", ptrT);
	printf("%p\n", &text[4]);
	printf("%p\n", ptrT+4);
	return 0;
}