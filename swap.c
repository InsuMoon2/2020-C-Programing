#include <stdio.h>

int main(void)
{
	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	int* p = &m;
	dummy = *p;
	*p = n;
	p = &n;
	*p = dummy;

	printf("%d %d\n", m, n);

	return 0;

}