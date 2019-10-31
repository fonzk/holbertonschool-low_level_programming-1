#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the moving head of the list
 * @str: string to be added to the list
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *buffer;
	int namelen;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	buffer = strdup(str);
	if (buffer == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
		new->next = NULL;

	new->next = *head;
	*head = new;
	new->str = buffer;

	namelen = 0;
	while (str[namelen])
		namelen++;

	new->len = namelen;

	return (new);
}
