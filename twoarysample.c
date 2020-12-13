#include <stdio.h>

int main()
{
	int abc[4][3] = {
		{ 1, 2, 3 },
		{ 5, 6, 7 },
		{ 9, 10, 11 },
		{ 13, 14 ,15 }
	};
	int rowsize = sizeof(abc) / sizeof(abc[0]);
	int colsize = sizeof(abc[0]) / sizeof(abc[0][0]);

	printf("각 행의 첫 주소 출력: \n");
	for (int i = 0; i < rowsize; i++)
		printf("%d ", abc[i]);
	printf("\n\n");

	printf("2행 원소의 주소와 값 출력: \n");
	int* p = abc[1]
		;
	for (int i = 0; i < colsize; i++)
	{
		printf("%d ", p);
		printf("%d\n", *p++);
	}

	return 0;
}