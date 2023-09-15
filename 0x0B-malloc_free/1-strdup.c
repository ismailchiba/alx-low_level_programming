#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string which,
 *   is a duplicate of the string
 * @str: string
 * Return: NULL if str is NULL returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i, j;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	array = malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		array[j] = str[j];
	}
	return (array);
	free(array);
}
