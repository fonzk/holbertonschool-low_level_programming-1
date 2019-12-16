#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: pointer to head
 * @idx: the index or place to insert the number
 * @n: number to insert
 * Return: adress of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	if (h == NULL && idx != 0)
		return (NULL);

	temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		if (i - 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
			return (new);
		}
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
