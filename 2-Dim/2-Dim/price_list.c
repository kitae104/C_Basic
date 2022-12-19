#include <stdio.h>
int main_7() 
{
	// 재료별 단가 
	int m[3][3] = {
		{5350, 3950, 2400},
		{5300, 4300, 2000},
		{5400, 3900, 2100}
	};

	// 재료별 구입 봉지수 
	int n[3] = {30, 50, 70};

	// 업체별 구입 가격 
	int p[3] = { 0,0,0 };

	int max = -9999;
	int x = 0, y = 0; 
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (m[i][j] > max) {
				max = m[i][j];
				x = i;
				y = j;
			}
		}
	}

	printf("%d %d %d", max, x, y);

	return 0;
}