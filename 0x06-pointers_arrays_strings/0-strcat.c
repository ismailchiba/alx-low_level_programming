#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return : string src append to dest
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
