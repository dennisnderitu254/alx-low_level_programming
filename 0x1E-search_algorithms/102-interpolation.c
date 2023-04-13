#include "search_algos.h"

/**
 *interpolation_search - function that  searches
 *for a value in a sorted array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: first index where value is located
 *
 * FUNCTIONALITY
 *
 * The function takes in the array to search, the size of the array,
 * and the value to search for.
 * It returns the index of the first occurrence of the value in the array,
 * or -1 if the value is not found or the array is NULL.
 *
 * Inside the function, we first check if the array is NULL or empty.
 * If it is, we return -1.
 * Otherwise, we initialize the low and high indices of the search range.
 *
 * The main loop of the function continues as long as the search
 * range is non-empty
 * and the value we're searching for is within the range.
 * In each iteration of the loop,
 * we calculate the probe position using the formula given in the prompt.
 * We then compare the value at the probe position with the value
 * we're searching for, and update the search range accordingly.
 *
 * At the end of the loop,
 * if we haven't found the value, we return -1.
 *
 * In the main function,
 * we test the interpolation_search function with a
 * sorted array and print out the results.
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
