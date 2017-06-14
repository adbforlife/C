#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s[10];
	int c;
	int lim = 10;
	for (int i=0; i<lim-1; ++i) {
		if ((c=getchar()) == '\n')
			c = lim;
		if (c == EOF)
			c = lim;
		s[i] = c;
	}
	printf("%s\n",s);
}