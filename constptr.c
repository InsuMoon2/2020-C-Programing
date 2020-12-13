#include <stdio.h>

int main()
{
	int i = 10, j = 20;
	const int* p = &i;

	p = &j;
	printf("%d\n", *p);

	double d = 7.8, e = 2.7;
	double* const pd = &d;

	*pd = 4.4;
	printf("%f\n", *pd);

	return 0;
}