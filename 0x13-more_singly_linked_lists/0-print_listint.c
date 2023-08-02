#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node = h;
	if (!h)
		return (0);
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
