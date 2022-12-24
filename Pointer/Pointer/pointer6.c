#include <stdio.h>
int main_6() {

	char* names[4];

	names[0] = "kim ki tae";
	names[1] = "kim jae min";
	names[2] = "kim ji min";
	names[3] = "park sheung hee";

	for (size_t i = 0; i < 4; i++)
	{
		printf("%d¹ø, ÀÌ¸§ : %s\n",i + 1, names[i]);
	}
		
	return 0;
}