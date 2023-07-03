#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, p;

	p = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p++;
			}
		}
	}
	return (p);
}
