#include "main.h"
#include <stddef.h>
/**
 * _strchr - function  that locates a character in a string
 * @s: the address of memory
 * @c: the element searching for
 * Return: a pointer to the first occurrence of the character
 **/
char *_strchr(char *s, char c)
{
	unsigned int i, j;

	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			j = i;
			break;
		}
	}
	if (j == 0)
	{
		return (NULL);
	}
	else
	{
		return (s + j);
	}
}
