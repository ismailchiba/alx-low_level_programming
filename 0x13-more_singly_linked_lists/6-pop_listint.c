#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 * @head: pointer to listint_t
 * Return: data (n) or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int number;

	if (!head)
		return (0);
	number = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (number);
}
