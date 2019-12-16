#include "lists.h"
/**
 * dlistint_len - length of dlistint
 * @h: list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
