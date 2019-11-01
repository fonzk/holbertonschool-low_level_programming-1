#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the moving head of the list
 * @str: string to be added to the list
 * Return: address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *hold;
	char *buffer;
	int namelen;

	hold = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	buffer = strdup(str);
	if (buffer == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = buffer;
	namelen = 0;
	while (str[namelen])
		namelen++;
	new->len = namelen;

	new->next = NULL;

	if (hold == NULL)
		*head = new;
	else
	{
		while (hold->next != NULL)
			hold = hold->next;
		hold->next = new;
	}

	return (new);
}
