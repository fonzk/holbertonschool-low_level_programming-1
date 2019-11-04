#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list
 * @head: our list
 * @n: our value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

/* make head point to new */
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
