#include <stdio.h>

void escape(char s);

int main(int argc, char const *argv[])
{
	escape('\n');
}

void escape(char s)	{
	switch (s)	{
		case '\t':
		printf("\\t");
		case '\n':
		printf("\\n");
	}
}