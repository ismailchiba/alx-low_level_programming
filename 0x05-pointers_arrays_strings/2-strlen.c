#include "main.h"
/**
 * _strlen - length of a string.
 * @s : the string
 * Description: used to calculate the length of a string
 * Return: the length value
 */

int _strlen(char *s)
{
	int i, j;

	i=0;
	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
