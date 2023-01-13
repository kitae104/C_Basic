#include <stdio.h>
int main12() {
	int a = 10;
	int b = 20;

	int* p1 = &a;
	int* p2 = &b;

	int temp; 

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("%d %d", a, b);
	
	return 0;
}