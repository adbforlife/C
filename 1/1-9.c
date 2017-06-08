#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	int previous = 0;

	while ((c = getchar()) != EOF)	{
		if (previous != ' ' || c != ' ')	{
			putchar(c);
			previous = c;
		}
	}
}