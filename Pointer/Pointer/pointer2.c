#include <stdio.h>
int main() {

	char name[] = { 'k', 'i', 'm', '\0' };
	char name1[] = "kimkitae";
	char* cPtr = name1;

	printf("%s\n", name);
	printf("%p\n", name);
	printf("%p\n", &name[0]);
	printf("%p\n", &name[1]);

	printf("%s\n", cPtr);
	printf("%p\n", cPtr);
	return 0;
}