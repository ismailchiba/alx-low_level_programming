#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a new string which,
 *   is a concatination of two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if str is NULL returns a pointer to the concatination strings
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int i, j, k, l;

	i = 0, j = 0, l = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else
	{
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	array = malloc(sizeof(char) * (i + j + 1));
	if (array == NULL)
		return (NULL);
	for (k = 0; k < i + j ; k++)
	{
		if (k < i)
			array[k] = s1[k];
		else
		{
			array[k] = s2[l];
			l++;
		}
	}
	return (array);
	free(array);
	}
}
