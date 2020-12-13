#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i, sum, max;

	printf("1에서부터 정수까지의 합을 구할 양의 정수 하나 입력: ");
	scanf("%d", &max);

	for (i = 1, sum = 0; i <= max; i++)
		sum += i;
	printf("\nfor 문으로 구한 1에서 %까지의 합: %3d\n", max, sum);

	i = 1, sum = 0;
	while (i <= max)
	{
		sum += i;
		i++;
	}
	printf("while 문으로 구한 1에서 %d까지 합: %3d\n", max, sum);

	return 0;
}