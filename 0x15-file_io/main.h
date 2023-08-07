#ifndef _MAIN_H
#define _MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* prototype 0-read_textfile.c */
ssize_t read_textfile(const char *filename, size_t letters);

/* prototype _putchar */

int _putchar(char c);

#endif
