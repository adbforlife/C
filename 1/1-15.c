#include <stdio.h>

double ctof(int);

int main(int argc, char const *argv[])
{
	printf("%.1f\n", ctof(100));
}

double ctof(int c)	{
	return c * 1.8 + 32.0;
}