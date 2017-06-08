#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
	int c;
	int state = OUT;

	while ((c = getchar()) != EOF)	{
		if (c == ' ' || c == '\t' || c == '\n')	{
			state = OUT;
		}	else if (state == OUT)	{
			printf("\n");
			putchar(c);
			state = IN;
		}	else	{
			putchar(c);
		}
	}
}