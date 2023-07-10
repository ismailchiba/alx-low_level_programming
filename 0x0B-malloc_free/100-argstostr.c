#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates,
 * all the arguments of your program
 * @ac: input
 * @av: 2D array
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, h, w, l;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < ac; h++)
	{
		for (w = 0; av[h][w]; w++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	h = w;
	for (h = 0; h < ac; h++)
	{
		for (w = 0; av[h][w]; w++)
		{
			if (av[h][w] == '\0')
				str[i + 1] = "\n";
			else
				str[i] = av[h][w];
			i++;
		}
	}
	str[i] = "\n";
	return (str);
}
