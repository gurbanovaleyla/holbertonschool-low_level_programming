#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table array
 * @key: key to convert to index
 * @size: size of the hash table array
 *
 * Return: index where key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* Get hash value using djb2 algorithm */
	hash = hash_djb2(key);

	/* Map hash to the array size (0 to size-1) */
	return (hash % size);
}
