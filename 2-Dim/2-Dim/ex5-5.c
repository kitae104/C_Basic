#include <stdio.h>
int main_5() {

	int a[] = { 1,2,3,4,5};
	int b[] = { 1,3,5,7,9,10};
	int c[5];
	int cnt = 0;

	printf("%d\n", sizeof(a)/sizeof(a[0]));

	int size = sizeof(a) / sizeof(a[0]);

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (a[i] == b[j]) {
				c[cnt++] = a[i];
			}
		}
	}
	
	//int cSize = sizeof(c) / sizeof(a[c]);

	for (size_t i = 0; i < cnt; i++)
	{
		printf("%d ", c[i]);
	}

	return 0;
}