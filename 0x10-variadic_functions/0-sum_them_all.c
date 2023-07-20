#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - addition of all elements (args)
 * @n: number of elements
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int s, i, j;

	va_start(args, n);

	i = (int)n;
	s = 0;
	for (j = 0; j < i; j++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
