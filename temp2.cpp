#include <stdio.h>

int main(void)
{

	int lower = 0, upper = 300, step = 20;
	int fahr = lower, celisius = 0;

	while (fahr <= upper) {
		celisius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celisius);
		fahr += step;
	}
}