#include "main.h"
#include <stddef.h>

/**
 * _strchr - function  that locates a character
 * @s: the address of memory
 * @c: the element searching for
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i)
		}
	}
	return (NULL);
}
