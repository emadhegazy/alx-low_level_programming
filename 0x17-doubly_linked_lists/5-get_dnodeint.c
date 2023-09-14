#include "lists.h"

/**
 * get_dnodeint_at_index - this is to get nth node of a list at index
 * @head: this is a pointer that point to the head of list.
 * @index: this is the position of node starting from 0.
 *
 * If the node does not exist, will return NULL.
 *
 * Return: the nth node of a dlistint_t linked listwill be returned.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	x = 0;

	/* check if head is NULL */
	if (!head)
		return (NULL);

	/* while head is not NULL */
	while (head != NULL)
	{
		/* initialize search here */
		if (x == index)
			break;
		x++;
		/* make head point to next if index is not found */
		head = head->next;
	}
	/* return the node */
	return (head);
}
