#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s[] = "ADByesADB";
	for (int i = 0; i < strlen(s); i++)
		s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - 'A' + 'a' : s[i];
	printf("%s\n", s);
}