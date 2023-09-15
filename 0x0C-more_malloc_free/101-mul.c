#include "main.h"
#include <stdlib.h>

/**
 * _check_digit - checks if a string contains a non-digit char
 * @s: string
 * Return: 1 or 0
 */

int _check_digit(char *s)
{
	unsigned int i;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
 * _strlen - count elements of a string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	result = malloc(sizeof(int) * (len1 + len2 + 1));
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

