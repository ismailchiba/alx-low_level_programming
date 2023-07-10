#include "main.h"

/*
 * _strdup - returns a pointer to a new string which is a duplicate of the string
 * @str: string
 * Return: NULL if str is NULL returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i;

	i = 0, j = 0;
	while (s[i] != '\0')
	{
		j++;
		i++;
	}

	array = malloc(
