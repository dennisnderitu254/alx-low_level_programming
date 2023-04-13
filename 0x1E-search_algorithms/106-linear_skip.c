#include "search_algos.h"

/**
 * linear_skip - function that searches for an algorithm in a sorted
 *		singly linked list of integers using the Linear skip algorithm.
 * @list: ptr to the  head of the linked list to search.
 * @value: the value to search for.
 *
 * Return: a ptr to the first node where the value is located, or NULL
 *	if the value is not present or the head of the list is NULL.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 *
 *
 * FUNCTIONALITY
 *
 * The function takes a pointer to the head of the skip list to search in,
 * list, and the value to search for, value.
 * It starts by checking if the list is empty or not,
 * and returns NULL if it is.
 *
 * Then, it finds the node to start searching from in the express lane.
 * This is done by iterating through the express lane until we find a
 * node whose value is greater than or equal to value.
 *
 * At each node we check, we print the value and its index.
 *
 * Once we have the starting node in the express lane,
 * we go from it to the end of the list,
 * again printing the values and their indices at each node we check.
 *
 * We then know that the value must be in the range between the index
 * of the starting node in the express lane and the index of the current
 * node we ended up at. We iterate through this range,
 * printing the values and their indices at each node we check,
 * until we find the node whose value is equal to value.
 *
 * If we find it, we return a pointer to that node.
 * Otherwise, we return NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
