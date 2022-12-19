#include <stdio.h>
int main_6() {

	for (size_t i = 0; i < 10; i++)				// 줄 수 
	{
		for (size_t j = 0; j < 5; j++)			// 열 수 	
		{
			printf("%c ", '*');
		}
		printf("\n");
	}

	return 0;
}