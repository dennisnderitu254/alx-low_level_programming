#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
/*
1. If the hash table is NULL or the key is NULL or the key is an empty string, return NULL.
2. Get the index of the key.
3. If the index is greater than or equal to the size of the array, return NULL.
4. Create a node pointer and set it to the index of the array.
5. While the node is not NULL and the key is not equal to the key of the node, set the node to the next node.
6. Return the value of the node or NULL if the node is NULL.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
