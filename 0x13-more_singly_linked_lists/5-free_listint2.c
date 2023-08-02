#include "lists.h"

/**
 * free_listint2 - free a list_t
 * @head: pointer to free
 * Return: nothing
 */

void free_listint2(listint_t **head)
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
	*head = NULL;
}
