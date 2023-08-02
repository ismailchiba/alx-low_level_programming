#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer listint_t
 * @index: index of the node 0->...
 * Return: return the index of node position
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int c = 0;/* compare with index */

	while (current && c < index)
	{
		current = current->next;
		c++;
	}

	return (current ? current : NULL);
}
