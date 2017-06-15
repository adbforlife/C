#include <stdio.h>
#include <string.h>

int bitcount(unsigned x);

int main(int argc, char const *argv[])
{
	printf("%d\n", bitcount(16));
	printf("%d\n", bitcount(19));
}

int bitcount(unsigned x)	{
	int count;
	for (count = 0; x != 0; x &= (x-1))
		count++;
	return count;
}