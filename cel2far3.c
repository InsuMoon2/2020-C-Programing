#include <stdio.h>

int main(void)
{
	double celcius = 12.46;

	printf("  ¼·¾¾(C)  È­¾¾(F)\n");
	printf("----------------------\n");
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;

	return 0;
}