#include <stdio.h>

#define ROW 2
#define COL 3

int main(void)
{
	int td[][COL] = { { 8, 5, 4}, { 2, 7, 6 } };

	**td = 10;
	*td[1] = 20;

	for (int i = 0, cnt = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++, cnt++)
		{
			printf("%d %d %d ", *(*td + cnt), *(td[i] + j), *(*(td + i) + j));
		}
		printf("\n");
	}
	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));
	printf("%p, %p, %p\n", td, td[0], td[1]);
	printf("%p, %p\n", &td[0][0], &td[1][0]);

	return 0;
}