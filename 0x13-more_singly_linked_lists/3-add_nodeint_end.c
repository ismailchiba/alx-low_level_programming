#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end -  adds a new node at the end of a list_t list
 * @head: double pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;/*new_node*/
	listint_t *current = *head;/*current node*/

	if (!n)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = n_node;
	return (n_node);
}
