#include <stdio.h>
int main_9() {

	char a = 'A';
	char* ptr;
	char** ptr2;

	ptr = &a;
	ptr2 = &ptr;

	printf("**ptr2의 내용 : %c, 변수 a의 내용: %c\n", **ptr2, a);

	printf("%p\n", &a);
	printf("%p\n", ptr);
	printf("%c\n", *ptr);
	printf("%p\n", &ptr);
	printf("%p\n", ptr2);

	printf("%p\n", *ptr2);
	printf("%c\n", **ptr2);

	return 0;
}