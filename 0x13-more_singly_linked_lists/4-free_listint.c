#include "lists.h"

/**
 * free_listint - free a listint_t
 * @head: pointer to free
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
}
