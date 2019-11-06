#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: pointer to head
 * @idx: the index or place to insert the number
 * @n: number to insert
 * Return: adress of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
