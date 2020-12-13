#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input, sum, i, j;

	do
	{
		printf("양의 정수 또는 0(종료)을 입력: ");
		scanf("%d", &input);

		for (i = 1; i <= input; i++)
		{
			for (j = 1, sum = 0; j <= i; j++)
			{
				printf("%d", j);
				j == i ? printf("=") : printf("+");
				sum += j;
			}
			printf("%d\n", sum);
		}
	} while (input > 0);

	puts("종료합니다.");

	return 0;
}