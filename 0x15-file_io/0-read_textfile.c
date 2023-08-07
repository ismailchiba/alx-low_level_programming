#include "main.h"

/**
 * read_textfile - function that reads a text file and print it
 * @filename: file to read
 * @letters: the size allocated
 * Return: 0 if filename is NULL or file can not be opened or read
 * write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *cont;
	ssize_t c_letters;
	ssize_t letters_written;

	fd = open(filename, O_RDONLY);
	if (filename == NULL || !letters)
		return (0);
	if (fd == -1)
		return (0);
	cont = malloc(letters + 1);/*continer*/
	if (cont == NULL)
	{
		close(fd);
		return (0);
	}
	c_letters = read(fd, cont, letters);/*count bytes*/
	if (c_letters <= 0)
	{
		close(fd);
		free(cont);
		return (0);
	}
	cont[c_letters] = '\0';/*Null terminate the string*/
	letters_written = write(STDOUT_FILENO, cont, c_letters);
	if (letters_written != c_letters)
	{
		close(fd);
		free(cont);
		return (0);
	}
	close(fd);
	free(cont);
	return (letters_written);
}
