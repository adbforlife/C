#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	int previous = 0;

	while ((c = getchar()) != EOF)	{
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}