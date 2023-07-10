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

	i = 0, j = 0;
	if (*str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	array = malloc(sizeof(array) * j);
	
	for (i = 0; *str; i++)
	{
		array[i] = str[i];
	}
	if (array == NULL)
		return (NULL);
	return (array);
	free(array);
}
