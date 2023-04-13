#include "search_algos.h"

/**
 * jump_list - function that earches for an algorithm in a sorted singly
 *	linked list of integers using the Jump search algorithm.
 * @list: ptr to the  head of the linked list to search.
 * @size: no. of nodes in the list.
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
 * We start by setting the step variable to the
 * square root of the size of the list.
 * We also set left and right pointers to the
 * first two nodes in the list.
 *
 * We keep jumping step nodes at a time with right until
 * we either reach the end
 * of the list or find a node whose value is
 * greater than or equal to value.
 *
 * Every time we jump, we print the value of the node we land on.
 *
 * Once we've found the range of indices
 * that value can be in,
 * we iterate through the nodes between left and right
 * (inclusive)
 * and print their values.
 *
 * If we find a node whose value is equal to value,
 * we return a pointer to it. Otherwise, we return NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
