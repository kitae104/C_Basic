#include <stdio.h>
int main() {
	short s;
	int i, j, k;
	long l;
	float f = (float)1.1;
	double d = 1.1;
	char c = 'a';
	char* str = "kim jae min";
	char str2[] = "kim ki tae";

	printf("1.-%c\n",c);
	c = c + 1;
	printf("2.-%c\n",c);

	s = 32767;
	s = s + 1;
	i = 2147483647; 
	l = 1;

	printf("%d �׸��� %d\n", s, i);

	printf("%f\n", f);
	printf("%lf\n", d);

	printf("%c\n", c+1);
	printf("%d\n", c+1);

	printf("%s\n", str);
	printf("%s\n", str2);

	return 0;
}