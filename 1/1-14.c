#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
	int c;
	int state = OUT;
	int frequencies[26];
	for (int i = 0; i < 26; i++)
		frequencies[i] = 0;

	while ((c = getchar()) != EOF)	{
		if (c >= 'a' && c <= 'z')
			frequencies[c - 'a']++;
		else if (c >= 'A' && c <= 'Z')
			frequencies[c - 'A']++;
	}

	for (int i = 14; i > 0; i--)	{
		for (int j = 0; j < 26; j++)	{
			if (i > frequencies[j])
				printf(" ");
			else
				printf("#");
		}
		printf("\n");
	}

	for (int i = 0; i < 26; i++)	{
		putchar('A' + i);
	}
	printf("\n");
}