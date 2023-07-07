#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the address of memory copied to
 * @src: the address of memory copied
 * @n: bytes of the memory copied
 * Return: a pointer to the memory area dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
