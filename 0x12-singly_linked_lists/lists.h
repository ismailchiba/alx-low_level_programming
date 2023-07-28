#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* 0-print_list.c module */
size_t print_list(const list_t *h);

/* 1-list_len.c module */
size_t list_len(const list_t *h);

/* 2-add_node.c module */
list_t *add_node(list_t **head, const char *str);

/* 3-add_node_end.c module */
list_t *add_node_end(list_t **head, const char *str);

/* 4-free_list.c */
void free_list(list_t *head);

/* 100-first.c _ 101-hello_holberton.asm */

#endif
