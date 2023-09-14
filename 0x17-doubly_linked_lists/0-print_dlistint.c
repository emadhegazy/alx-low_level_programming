#include "lists.h"

/**
 * print_dlistint - this is to print all the elemts of a doubly linked list
 * @h: this is a poiner that points to the head of the list
 *
 * Return: will return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to the list */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
