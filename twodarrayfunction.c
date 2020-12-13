#include <stdio.h>

double sum(double data[][3], int, int);
void printarray(double data[][3], int, int);

int main(void)
{
	double x[][3] = { {1,2,3},{7,8,9},{4,5,6},{10,11,12} };

	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);
	printf("2차원 배여르이 자료값은 다음과 같습니다.\n");
	printarray(x, rowsize, colsize);
	printf("2차원 배열 원소합은 %.3lf 입니다.\n", sum(x, rowsize, colsize));

	return 0;
}

double sum(double(*data)[3], int rowsize, int colsize)
{
	double total = 0;

	for (int i = 0; i < rowsize; i++)
		for (int j = 0; j < colsize; j++)
			total += data[i][j];

	return total;
}

void printarray(double(*data)[3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++)
	{
		printf("% d행원소: ", i + 1);
		for (int j = 0; j < colsize; j++)
			printf("x[%d][%d] = %5.2lf  ", i, j, data[i][j]);
		printf("\n");
	}
	printf("\n");
}