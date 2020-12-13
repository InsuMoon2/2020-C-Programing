#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 3

int main(void)
{
	int* pary[SIZE] = { NULL };
	int a = 10, b = 20, c = 30;

	pary[0] = &a;
	pary[1] = &b;
	pary[2] = &c;
	for (int i = 0; i < SIZE; i++)
		printf("*pary[%d] = %d\n", i, *pary[i]);

	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", pary[i]);
		printf("%d, %d, %d\n", a, b, c);
	}

	return 0;
}