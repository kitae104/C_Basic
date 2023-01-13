#include <stdio.h>
int main() {

	char* names[] = {
		"computer",
		"notebook",
		"printer",
		"router"
	};
	
	char c = getchar();

	while (c != '0') {
		int check = 0; 
		for (size_t i = 0; i < 4; i++)
		{
			if (c == *names[i]) {
				printf("%s\n", names[i]);
				check = 1;
			}
		}
		
		if (check == 0) {
			printf("없는 경우 입니다.\n");
		}
		getchar();
		c = getchar();
	}
	
	return 0;
}