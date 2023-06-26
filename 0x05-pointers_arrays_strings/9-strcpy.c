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
	/*loop */
	i = 0;
	while(i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
