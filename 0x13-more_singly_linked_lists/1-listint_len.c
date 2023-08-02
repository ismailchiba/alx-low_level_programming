#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked listint_t list
 * @h: pointer to listint_t
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	const listin_t *node = h;
	size_t len;

	while (node)
	{
		node = node->next;
		len++;
	}
	return (len);
}
