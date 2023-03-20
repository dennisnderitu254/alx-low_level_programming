#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *@size: Size of the array
 *@c: Character to insert
 *Return: NULL if size is zero or if it fails,
 *pointer to array if everything is normal.

 *FUNCTIONALITY *

 * 1. First, we check if the size is 0. If it is, we return NULL.
 * 2. Then, we allocate memory for the array.
 * 3. If the allocation fails, we return NULL.
 * 4. If the allocation succeeds, we loop through the array and set each element to the value of c.
 * 5. Finally, we return the array.
 * Time Complexity: O(n)

*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
