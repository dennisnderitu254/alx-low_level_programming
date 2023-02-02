#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
/*
1. It takes a string and returns an unsigned long int.
2. It sets the hash to 5381.
3. It loops through the string, setting c to the current character and incrementing the pointer to point to the next character.
4. It sets the hash to the previous hash value times 33 plus the current character.
5. It returns the hash.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
