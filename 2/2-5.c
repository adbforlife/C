#include <stdio.h>
#include <string.h>

int any(char s1[], char s2[]);

int main(int argc, char const *argv[])
{
	char s1[] = "adbefg";
	char s2[] = "epfowifp";
	printf("%d\n", any(s1, s2));
}

int any(char s1[], char s2[])	{
	int i, j;
	int k = -1;
	for (i = 0; i < strlen(s1); i++)	{
		for (j = 0; j < strlen(s2); j++)	{
			if (s1[i] == s2[j])	{
				return k = i;
			}
		}
	}
	return k;
}