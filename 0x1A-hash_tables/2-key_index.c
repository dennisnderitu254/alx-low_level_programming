#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
/*
1. It takes a key and a size as input.
2. It uses the hash_djb2 function to get the hash of the key.
3. It uses the modulo operator to get the index of the key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
