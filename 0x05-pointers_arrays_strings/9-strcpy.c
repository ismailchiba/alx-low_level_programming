#include "main.h"
#include <string.h>

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest : destination array
 * @src : source array
 * Return: array type char
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = strlen(src);
	for (i = 0; i < j; i++)
	{
	       dest[i] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
