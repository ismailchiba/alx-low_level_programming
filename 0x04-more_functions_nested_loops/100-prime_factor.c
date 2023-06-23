#include <stdio.h>
#include <math.h>
/**
 * main - find prime factor of the number 612852475143
 * Return: Always 0 success
 */

int main(void)
{
	long int n = 612852475143;
	long int i, j;

	j = sqrt(n);

	for (i = 3; i < j; i = i+2)
	{
		while((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%ld\n", n);
	return (0);
}
