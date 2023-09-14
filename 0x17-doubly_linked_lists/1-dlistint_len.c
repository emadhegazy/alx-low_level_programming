#include "lists.h"

/**
 * dlistint_len - this is to  return the number of elements in a,
 * linked dlistint_t list.
 * @h:this is a  poiner that points to the head of the list
 *
 * Return: will return the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to the list */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
