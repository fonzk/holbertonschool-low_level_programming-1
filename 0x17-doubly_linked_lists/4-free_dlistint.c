#include "lists.h"

/**
 * free_dlistint - function that frees a  list
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
