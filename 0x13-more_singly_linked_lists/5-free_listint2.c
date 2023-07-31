#include "lists.h"

/**
 * free_listint2 - is to frees a linked list.
 *
 * @head: is a pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}

