#include "main.h"

/**
 * get_endianness -this is to check if a machine is little or big endian.
 *
 * Return: 0 if big, 1 if little.
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}

