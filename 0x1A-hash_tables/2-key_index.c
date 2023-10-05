#include "hash_tables.h"

/**
 * key_index -this is to give the index of a key.
 * @key: the key, a string.
 * @size: this is the size of the array of the hash table.
 *
 * Return: this is the Index number for the key
 * /value pair in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
