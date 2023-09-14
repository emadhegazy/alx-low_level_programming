#include "lists.h"

/**
 * sum_dlistint - this is to return the sum of all the,
 * data (n) of a linked list.
 * @head: this is a pointer to point to head of linked list.
 *
 * If the list is empty, return 0.
 *
 * Return: will return the sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* while we have pointer to the list */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
