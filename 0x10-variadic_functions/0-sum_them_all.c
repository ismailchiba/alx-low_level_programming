#include "variadic_functions.h"

/**
 * sum_them_all - addition of all elements (args)
 * @n: number of elements
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int s = 0;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		int x;

		x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
