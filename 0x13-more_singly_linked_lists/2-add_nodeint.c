#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!n)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->len = (int)n;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
