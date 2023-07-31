#include "lists.h"

/**
 * sum_listint -is to calculate the sum of all the data in a listint_t list.
 *
 * @head: is the first node in the linked list.
 *
 * Return: is to result sum of all the data.
 * n is the data of the node.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *emad = head;

while (emad)
{
sum += emad->n;
emad = emad->next;
}

return (sum);
}

