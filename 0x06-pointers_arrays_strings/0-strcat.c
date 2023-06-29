#include "main.h"

/**
 * _stract - concatenates two strings
 * @dest: first string
 * @src: second string
 * description: concatenates two strings
 * return: string
 */

char *_strcat(char *dest, char *src)
{
	int i, k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';
	return (dest);
}
