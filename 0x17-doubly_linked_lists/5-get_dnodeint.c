#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth nofe
 * a given position
 * @head: pointer to head
 * @index: the index or place to return the node of
 * Return: adress of new node or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
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
