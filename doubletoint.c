#include <stdio.h>

int main(void)
{
	double dint[4] = { 0.0 };

	int *p = (int *) dint;
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;

	for (int i = 0; i < 4; i++)
		printf("%u %d\n", p + i, *(p + i));

	return 0;
}