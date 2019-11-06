#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 * @head: pointer to head
 * @index: position in list to delete node at
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		temp  = temp->next;
	}

	if (i != index - 1 || temp->next == NULL)
		return (-1);

	del = temp->next;
	temp->next = del->next;
	free(del);

	return(1);

}
