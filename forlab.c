#include <stdio.h>
#define MAX 9

int main(void)
{
	printf("=== 구구단 출력 ===\n");
	for (int i = 2; i <= MAX; i++)
	{
		printf("%6d단 출력\n", i);
	}

	return 0;
}