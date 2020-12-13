#include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("변수명  저장값  주소값   \n");
	printf("-----------------------------\n");
	printf("  c     %d      %p\n", c, &c);
	printf("  b     %d      %p\n", b, &b);
	printf("  a     %d      %p\n", a, &a);

	int* p = &c;
	printf("  c     %d      %p\n", *p, p);
	printf("  b     %d      %p\n", *(p+3), p+3);
	printf("  a     %d      %p\n", *(p+6), p+6);

	return 0;
}