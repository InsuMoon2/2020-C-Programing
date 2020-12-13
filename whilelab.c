#include <stdio.h>
#define MAX 20

int main(void)
{
	int n = 0;

	while ((n <= MAX)) {
		printf("%4d",n);
		n += 3;
	}
	puts("");

	return 0;
}