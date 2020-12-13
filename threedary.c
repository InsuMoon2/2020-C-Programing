#include <stdio.h>

#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	int score[][ROWSIZE][COLSIZE] = {
		{ { 95, 85 },
		  { 85, 83 },
		  { 92, 75 },
		  { 90, 88 } },
		{ { 88, 77 },
		  { 72, 95 },
		  { 88, 92 },
		  { 93, 83 } }
	};

	for (int i = 0; i < 2; i++)
	{
		if (i == 0) printf("[°­ÁÂ 1]");
		else printf("[°­ÁÂ 2]");
		printf("%11s%7s\n", "Áß°£", "±â¸»");

		for (int j = 0; j < ROWSIZE; j++)
		{
			printf("%10s%2d", "ÇÐ»ý", j + 1);
			for (int k = 0; k < COLSIZE; k++)
				printf("%6d ", score[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}