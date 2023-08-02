#include "lists.h"

/**
 * free_listint2 - free a list_t
 * @head: pointer to free
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;

	if (!head)
		return;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
