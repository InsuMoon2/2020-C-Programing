#include <stdio.h>

#include <math.h>

int main(void)
{
	printf("  i  i力蚌  i技力蚌  力蚌辟(sqrt)\n");
	printf("-------------------------------------\n");
	for (int i = 3; i < 7; i++)
		printf("%3d %7.1f %9.1f %9.1f\n", i, pow(i, 2), pow(i, 3), sqrt(i));
	printf("\n");

	printf("exp(1.0) == %5.2f, ", exp(1, 0));
	printf("pow(2.72, 1.0) == %5.2f, ", pow(2.72, 1.0));

	printf("sqrt(49) == %5.2f\n", sqrt(49));
	printf("abs(-10) == %3d, ", abs(-10));
	printf("ceil(7.1) == %5.2f, ", ceil(7.1));
	printf("floor(6.9) == %5.2f\n", floor(6.9));

	return 0;
}