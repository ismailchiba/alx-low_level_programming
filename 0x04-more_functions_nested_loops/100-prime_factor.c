#include <stdio.h>

/**
 * main - find prime factor of the number 612852475143
 * Return: Always 0 success
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 3; i < 782849; i = i+2)
	{
		while((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%ld\n", n);
	return (0);
}
