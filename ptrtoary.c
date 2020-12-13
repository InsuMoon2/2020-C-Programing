#include <stdio.h>

int main(void)
{
	int a[4] = { 1, 3, 6, 8 };
	int* pa = a;

	printf("%d %d %d %d\n", *(pa), *(pa + 1), *(pa + 2), *(pa + 3));
	
	printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);
	
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	
	printf("%d %d %d %d\n\n", *a, *(a+1), *(a+2), *(a+3));

	pa = &a[1];
	printf("%d ", ++ * pa);
	printf("%d ", *pa++);
	printf("%d ", -- * pa);
	printf("%d\n\n", (*pa)--);
	printf("%d %d %d %d\n", *(pa - 2), *(pa - 1), *pa, *(pa + 1));

	return 0;

	
}