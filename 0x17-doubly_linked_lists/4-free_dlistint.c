#include "lists.h"

/**
 * free_dlistint - this function is to  free a dbly,
 * linked list.
 * @head: this is a pointer that points to the head of list.
 *
 * Return: there is no return.
 */

void free_dlistint(dlistint_t *head)
{
	/* check if head is NULL and return if so */
	while (head != NULL)
	{
		/* traverse the list freeing each node */
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
