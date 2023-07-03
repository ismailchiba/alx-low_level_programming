#include <stdio.h>
#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *fir = haystack;/*first*/
		char *sec = needle;/*second*/

		while (*fir == *sec && *sec != '\0')
		{
			fir++;
			sec++;
		}

		if (*sec == '\0')
			return (haystack);
	}
	return (NULL);
}
