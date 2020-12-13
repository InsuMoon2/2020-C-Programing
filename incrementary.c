#include <stdio.h>

void incrementary(int ary[], int n, int SIZE);
void printary(int* data, int SIZE);

int main(void)
{
	int data[] = { 4,7,2,3,5 };
	int aryLength = sizeof(data) / sizeof(int);

	printary(data, aryLength);
	incrementary(data, 3, aryLength);
	printf("배열 원소에 각각 3을 더한 결과: \n");
	printary(data, aryLength);

	return 0;
}
void incrementary(int ary[], int n, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		*(ary + i) += n;
}
void printary(int* data, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}