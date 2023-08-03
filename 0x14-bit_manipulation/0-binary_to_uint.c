#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string contain a binary number
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b);
{
	int len = 0, i;
	unsigned int decimal = 0;

	while (b[len])
	{
		len++;
	}
	len--;
	if (b == NULL)
		return (0);
	for (i = 0; *b; i++)
	{
		if (b[i] != '1' && b[i] != '0' && i < len)
			return (0);
	}
	i = 0;
	while (*b)
	{
		decimal = (b[i] - '0') * pow(2,len - i);
		i++;
	}
	return (decimal);
}
