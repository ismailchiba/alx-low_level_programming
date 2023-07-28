#include "lists.h"

/**
 * free_list - free a list_t
 * @head: pointer to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp, *next;
	if (!head)
		return ;
	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
