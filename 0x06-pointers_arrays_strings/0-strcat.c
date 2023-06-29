#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return : string src append to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; dest[i] < '\0'; i++)
	{
	}

	for (j = i, k = 0; src[k] < '\0'; j++, k++)
	{
		dest[j] = src[k];
	}
	dest[j] = '\0';

	return (dest);
}
