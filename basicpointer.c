#include <stdio.h>

int main(void)
{
	char c = '@';
	char* pc = &c;
	int m = 100;
	int* pm = &m;
	double x = 5.83;
	double* px = &x;

	printf("변수명  주소값   저장값\n");
	printf("--------------------------\n");
	printf("%3 %12p %9c\n", "c", pc, c);
	printf("%3 %12p %9d\n", "m", pm, m);
	printf("%3 %12p %9f\n", "x", px, x);

	return 0;
}