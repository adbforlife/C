#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[]);

int main(int argc, char const *argv[])
{
	char s1[] = "adbefg";
	char s2[] = "de";
	squeeze(s1, s2);
	printf("%s\n",s1);
}

void squeeze(char s1[], char s2[])	{
	int i, j, k;
	for (i = k = 0; i < strlen(s1); i++)	{
		printf("%s\n", s1);
		s1[k++] = s1[i];
		for (j = 0; j < strlen(s2); j++)	{
			if (s1[i] == s2[j])	{
				--k;
			}
		}
	}
	s1[k] = '\0';
}