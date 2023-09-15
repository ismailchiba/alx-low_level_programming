#include "main.h"
#include <math.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string contain a binary number
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i])
	{
		decimal = (b[i] - '0') + 2 * decimal;
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	return (decimal);
}
