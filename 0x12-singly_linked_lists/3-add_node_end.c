#include "lists.h"
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_l *n_node;/*new_node*/

	while (str[len])
	{
		len++;
	}
	n_node = malloc(sizeof(list_t));
	n_node->len = len;
	n_node->str = strdup(str);
	n_node->next = NULL;

	if (!n_node)
		return (NULL);
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	list_t *current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = n_node;
	return (n_node);
}
