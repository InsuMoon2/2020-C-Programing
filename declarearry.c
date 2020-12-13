#include <stdio.h>

#define SIZE 5

int main(void)
{
	int score[SIZE];

	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	score[3] = 91;

	for (int i = 0; i < SIZE; i++)
		printf("%d ", score[i]);
	printf("\n");

	return 0;
}