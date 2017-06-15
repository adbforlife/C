#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(int argc, char const *argv[])
{
	int v[] = {1, 2, 3, 4, 5, 6};
	printf("%d\n", binsearch(5, v, 6));
}

int binsearch(int x, int v[], int n)	{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <  high -1)	{

		mid = (low+high) / 2;
		if (x < v[mid])
			high = mid;
		else
			low = mid;
	}
	if (v[mid] == x)
		return mid;
	else
		return -1;
}