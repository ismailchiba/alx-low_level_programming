#include "lists.h"

/**
 * free_list - free a list_t
 * @head: pointer to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(temp);
}
