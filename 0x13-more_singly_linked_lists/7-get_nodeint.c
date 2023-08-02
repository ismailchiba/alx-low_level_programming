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
	listint_t *current = *head;
	listint_t *temp;
	unsigned int c = 0;/* compare with index */

	if (!head || !index)
		return (NULL);
	while (current)
	{
		if (c == index)
			return (current);
		temp = current->next;
		c++;
		current = temp;
	}
	return (NULL);
}
