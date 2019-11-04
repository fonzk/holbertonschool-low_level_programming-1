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
	listint_t *temp, *aftertemp;
	listint_t *new;
	unsigned int i = 0;

	temp = *head;
	for (i = 0; i < idx; i++)
		temp = temp->next;

	aftertemp = temp->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = aftertemp;
	temp->next = new;

	return (new);
}
