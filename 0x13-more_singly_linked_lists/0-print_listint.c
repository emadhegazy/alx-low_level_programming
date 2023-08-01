#include "lists.h"

/**
 * print_listint -this is to print all the elements of a linked list
 *
 * @h: linked list of type listint_t to print
 *
 * Return: the number of all nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;

while (h)
{

number++;
printf("%d\n", h->n);
h = h->next;
}

return (number);
}

