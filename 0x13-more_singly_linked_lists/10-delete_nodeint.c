#include "lists.h"

/**
 * delete_nodeint_at_index -is to delete a node in the list at a certain index.
 *
 * @head:is a pointer to the first element in the linked list.
 *
 * @index: is the number of the node to delete.
 *
 * Return: 1 if (Success), or -1 if (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *emad = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(emad);
return (1);
}

while (i < index - 1)
{
if (!emad || !(emad->next))
return (-1);
emad = emad->next;
i++;
}


current = emad->next;
emad->next = current->next;
free(current);

return (1);
}

