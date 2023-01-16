#include <stdio.h>
double f(double x);
int main() {

	for (double x = 0.0; x <= 1.0; x += 0.1)
	{
		double res = f(x);
		printf("%.1f : %.2f\n", x, res);
	}

	return 0;
}

double f(double a) {
	double res = a * a + 2 * a + 1;
	return res;
}