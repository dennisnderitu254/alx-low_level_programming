#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 *
 * FUNCTIONALITY
 *
 * The function takes an array of integers, the size of the array,
 * and a value to search for as parameters.
 * It returns the index of the first occurrence of the value in the array,
 * or -1 if the value is not found or the array is NULL.
 *
 * The implementation uses a for loop to iterate over the array elements,
 * comparing each element to the search value and printing the
 * comparison for each iteration.
 * If a match is found, the function returns the current index.
 * If the end of the array is reached without finding a match,
 * the function returns -1.
 *
 * In the main function, we test the linear_search function
 * with some sample inputs,
 * printing the result of each call.
 *
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
