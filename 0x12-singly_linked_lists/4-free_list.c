#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
