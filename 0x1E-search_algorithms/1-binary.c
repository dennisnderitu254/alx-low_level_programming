#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 *
 * FUNCTIONALITY
 *
 * In the main function, we create an array of integers and calculate
 * its size using the sizeof operator.
 * We then call the binary_search function three times
 * with different values of value.
 *
 * In the binary_search function, we first check if the array is NULL.
 * If it is, we print a message indicating so and return -1.
 *
 * We then initialize three variables left, right,
 * and mid to implement the binary search algorithm.
 * left and right represent the leftmost and rightmost indices of the
 * subarray being searched, and mid represents the middle index.
 *
 * We then enter a while loop that continues until
 * left is greater than right.
 * In each iteration of the loop,
 * we calculate mid as the average of left and right.
 * We then print the subarray being searched using a for loop.
 *
 * We then check if the value at index mid is equal to value.
 * If it is, we return mid.
 * If array[mid] is less than value, we update left to mid + 1.
 * If array[mid] is greater than value, we update right to mid - 1.
 *
 * If we exit the while loop without finding value,
 * we print a message indicating so and return -1.
 *
 * Note that the function assumes that the array is sorted in
 * ascending order and that value does not
 * appear more than once in the array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
