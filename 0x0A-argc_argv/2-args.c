#include <stdio.h>
#include "main.h"

/**
 * main - body
 * @argc: input
 * @argv: input
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0;i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
	(void)argc;
	(void)argv;
}
