#include "main.h"

/**
 * clear_bit -this is to  set the value of a given bit to 0.
 *
 * @n:is a pointer to the number to change.
 *
 * @index:is the index of the bit to clear.
 *
 * Return: 1 if success, -1 if failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

