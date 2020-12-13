#include <stdio.h>

int add2(int a, int b);
int findMax2(int, int);
void printMin(int, int);

int main(void)
{
	int a = 3, b = 5;

	int max = findMax2(a, b);
	printf("최대: %d\n", max);
	printf("합 : %d\n", add2(a, b));
	printMin(2, 5);

	return 0;
}
int add2(int a, int b)
{
	int sum = a + b;

	return (sum);
}
int findMax2(int a, int b)
{
	int max = a > b ? a : b;

	return max;
}
int findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return (min);
}
void printMin(int a, int b)
{
	int min = a < b ? a : b;
	printf("최소: %d\n", min);

	return;
}