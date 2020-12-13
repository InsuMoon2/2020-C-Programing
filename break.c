#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input;

	while (1)
	{
		printf("정수[음수, 0(종료), 양수]를 입력 후 [Enter] : ");
		scanf("%d", &input);
		printf("입력한 정수 %d\n", input);
		if (input == 0)
			break;
	}

	puts("종료합니다.");

	return 0;
}