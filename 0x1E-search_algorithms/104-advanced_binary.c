#include "search_algos.h"

/**
 * advanced_binary_recursive - function that searches recursively for a
 *		value in a sorted array of integers using binary search.
 * @array: ptr to the first element of the [sub]array to search.
 * @left: starting index of the [sub]array to search.
 * @right: ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: the index where the value is located, or -1
 *	if the value is not present.
 *
 *
 * Description: Prints the [sub]array being searched after each change.
 *
 * FUNCTIONALITY
 *
 * The function advanced_binary_recursive takes an array array,
 * the indices left and right of the subarray to search in,
 * and the value value to search for.
 * If right is less than left, then the value is not present
 * in the array and we return -1.
 *
 * We then compute the middle index i of the subarray and print the array.
 *
 * If array[i] is equal to value and either i is equal to
 * left or array[i - 1] is not equal to value,
 * then we have found the value and we return the index i.
 *
 * If array[i] is greater than or equal to value,
 * then we search in the left half of the subarray by calling
 * the function recursively with left and i as the indices.
 *
 * Otherwise, we search in the right half of the subarray by calling the
 * function recursively with i + 1 and right as the indices.
 *
 * The function advanced_binary takes an array array,
 * the size size of the array,
 * and the value value to search for.
 *
 * If array is NULL or size is 0, then the
 * function returns -1.
 * Otherwise, it calls advanced_binary_recursive with the
 * appropriate arguments.
 *
 * In the main function, we create an array of integers array
 * and compute its size size.
 * We then test the advanced_binary function by searching for
 * the values 8, 5, and 999 in the array, and print the results.
 *
 * Note that the function prints the subarray it is currently searching in,
 * which can be useful for debugging.
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - function that searches for a value in a sorted
 *		array of integers using advanced binary search.
 * @array: ptr to the first element of the array to search.
 * @size: no. of elements in the array.
 * @value: the value to search for.
 *
 * Return: the first index where the value is located. or -1
 *	if the value is not present or the array is NULL.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
