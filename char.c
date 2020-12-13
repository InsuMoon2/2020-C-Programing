#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <ctype.h>

void print2char(char);

int main(void)
{
	char ch;

	printf("알파벳(종료x) 또는 다른 문자 입력하세요.\n");
	do
	{
		printf("문자 입력 후 Enter: ");
		scanf_s("%c", &ch);
		getchar();
		if (isalpha(ch))
			print2char(ch);
		else
			printf("입력: %c\n", ch);
	} while (ch != 'x' && ch != 'X');

	return 0;
}

void print2char(char ch)
{
	if (isupper(ch))
		printf("입력: %c, 변환: %c\n", ch, tolower(ch));
	else
		printf("입력: %c, 변환: %c\n", ch, toupper(ch));

	return;
}