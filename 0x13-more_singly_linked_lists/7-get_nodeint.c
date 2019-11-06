#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: head of our linked list
 * @index: the index in our linked list to return the nth node
 * Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (i != index)
		return (NULL);

	return (temp);
}
