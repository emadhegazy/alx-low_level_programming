#include "lists.h"

/**
 * add_dnodeint - this is to add a new node at begininning of a dbly,
 * linked list.
 * @head:this is a pointer that points to head of list.
 * @n: this is a data to be added.
 *
 * Return: will return the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate the memory for new node */
	new_node = malloc(sizeof(dlistint_t));

	/* if it fails will return NULL */
	if (new_node == NULL)
		return (NULL);

	/* this is to assign data to new node */
	new_node->n = n;

	/* point next of newNode to the first node of the doubly linked list */
	new_node->next = *head;

	/* this is to point previous of new node to NULL */
	new_node->prev = NULL;

	/* point prev of 1st node (now 1st node is the second node) to new node */
	if ((*head) != NULL)
		(*head)->prev = new_node;

	/* this is a head points to newNode */
	(*head) = new_node;

	return (new_node);
}
