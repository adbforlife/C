#include <stdio.h>

int main(int argc, char const *argv[])
{
	long blanks = 0;
	long tabs = 0;
	long newlines = 0;

	int c;

	while ((c = getchar()) != EOF)	{
		if (c == ' ')
			blanks++;
		else if (c == '\t')
			tabs++;
		else if (c == '\n')
			newlines++;
	}
	printf("%ld\t%ld\t%ld\n", blanks, tabs, newlines);
}