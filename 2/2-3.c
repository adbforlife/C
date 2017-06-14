#include <stdio.h>
#include <string.h>

int htoi(char s[]);

int main(int argc, char const *argv[])
{
	char s[] = "1f1d";
	printf("%d\n", htoi(s));
}

int htoi(char s[])	{
	int result = 0;
	for (int i = 0; i < strlen(s); i++)	{
		int c = 0;
		if (s[i] >= '0' && s[i] <= '9')
			c = s[i] - '0';
		if (s[i] >= 'a' && s[i] <= 'f')
			c = s[i] - 'a' + 10;
		result = result * 16 + c;
	}
	return result;
}