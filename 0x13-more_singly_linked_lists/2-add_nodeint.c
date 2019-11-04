#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of
 * a listint_t list.
 * @head: the start of the list
 * @n: value of the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;

	new->next = *head;
	*head = new;
	new->n = n;

	return (new);
}
