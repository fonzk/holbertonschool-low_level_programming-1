#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of a linked list
 * @head: start of your list
 * Return: sum of values in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int hold;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;

	sum = 0;
	while (temp != NULL)
	{
		hold = temp->n;
		sum += hold;
		temp = temp->next;
	}

	return (sum);
}
