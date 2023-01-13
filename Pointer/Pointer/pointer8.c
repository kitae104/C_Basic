#include <stdio.h>
int main_8() {
	
	int c = 10;
	int* ptr = &c;
	int** ptr2;
	ptr2 = &ptr;

	printf("%p\n", ptr);
	printf("%p\n", &c);
	printf("%d\n", *ptr);

	printf("%p\n", ptr2);
	printf("%p\n", *ptr2);

	return 0;
}