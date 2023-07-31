#include "lists.h"

/**
 * insert_nodeint_at_index - is to insert a new node in a linked list,
 * at a given position.
 *
 * @head: is a pointer to the first node in the linked list.
 *
 * @idx: is abbreviation of the index where the new node is added.
 *
 * @n: refers to the data to insert in the new node.
 * emad is a temporary node.
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *emad = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; emad && i < idx; i++)
{
if (i == idx - 1)
{
new->next = emad->next;
emad->next = new;
return (new);
}
else
emad = emad->next;
}
return (NULL);
}

