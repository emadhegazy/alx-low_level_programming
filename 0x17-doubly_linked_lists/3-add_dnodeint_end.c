#include "lists.h"

/**
 * add_dnodeint_end - this is to  add node at the end of a list.
 * @head: this is a pointer to point to head of list.
 * @n: this is a data to be added.
 *
 * Return: will return the address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	/*this is to allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));

	/* this is if it fails return NULL */
	if (new_node == NULL)
		return (NULL);

	/* this is to assign data to new node */
	new_node->n = n;

	new_node->next = NULL;

	last = *head;

	/* if there is no head/list make new node as head node */
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		/* traverse till last node */
		while (last->next)
			last = last->next;
		/*this is to  change the next of last node */
		last->next = new_node;
	}
	new_node->prev = last;

	return (new_node);
}
