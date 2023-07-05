#include "main.h"

/**
 * pow_recursion - urns the value of x raised to the power of y
 * @x: input value
 * @y: input value
 * Return: intger the power of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y-1));
}
