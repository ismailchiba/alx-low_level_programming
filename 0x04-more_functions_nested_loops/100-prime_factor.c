#include <stdio.h>
#include <math.h>

/**
 * main - prime factors
 * Return :0 
 */

int main(void)
{
	long int i, n = 612852475143;

	for(i = 3;i < sqrt(n); i=i+2)
	{
		while((n % i == 0) && n != i)
			n = n / i;
	}

	printf("%ld\n", n);
	return 0;
}
