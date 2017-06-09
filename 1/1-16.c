#include <stdio.h>

int main()	{
	int len = 0;
	int max = 0;
	int c;

	while ((c = getchar()) != EOF)	{
		len++;
		if (c == '\n')	{
			if (len > max)
				max = len;
			len = 0;
		}
	}

	printf("%d\n", max);
}