#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
	int c;
	int state = OUT;
	int frequencies[10];
	for (int i = 0; i < 10; i++)
		frequencies[i] = 0;
	int length = 0;

	while ((c = getchar()) != EOF)	{
		if (c == ' ' || c == '\t' || c == '\n')	{
			if (state == IN)	{
				frequencies[length - 1]++;
				state = OUT;
			}
		}	else if (state == OUT)	{
			state = IN;
			length = 1;
		}	else	{
			length++;
		}
	}
	for (int i = 6; i > 0; i--)	{
		for (int j = 0; j < 10; j++)	{
			if (i > frequencies[j])
				printf(" ");
			else
				printf("#");
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++)	{
		printf("%d", i);
	}
	printf("\n");
}