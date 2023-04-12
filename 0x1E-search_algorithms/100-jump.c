#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 *
 * Explanation:
 *
 * The function takes the sorted integer array, the size of the array,
 * and the value to search as input parameters.
 * It starts by checking if the array is NULL, and returns -1 if it is.
 * Then, it sets the jump step as the square root of the size of the array,
 * and initializes the left and right pointers.
 *
 * The while loop is used to move the right pointer forward in jumps
 * of size jump until it finds an element
 * that is greater than or equal to the value we are searching
 * for or until it reaches the end of the array.
 * Inside the loop, it also prints the indices of the array that are
 * being checked.
 *
 * After the loop, it checks if the right pointer has gone beyond the
 * bounds of the array and adjusts it if necessary.
 * Then, it searches for the value in the range [left, right] using a for loop,
 * and returns the index if it is found.
 * If the value is not found, it prints a message saying so and returns -1.
 *
 * Finally, in the main function, we create an integer array, get its size,
 * and call the jump_search function with different values to test it.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
