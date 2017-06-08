#include <stdio.h>

/*adb*/

int main()	{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("%3s%8s\n", "C", "F");
	while (celsius <= upper)	{
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%3.0f%8.1f\n", celsius, fahr);
		celsius += step;
	}
}