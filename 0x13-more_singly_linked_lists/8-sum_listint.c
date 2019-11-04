#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: start of your list
 * Return: sum of values in your list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int interim;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;

	sum = 0;
	while (temp != NULL)
	{
		interim = temp->n;
		sum = sum + interim;
		temp = temp->next;
	}

	return (sum);
}
