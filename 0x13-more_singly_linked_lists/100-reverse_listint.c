#include "lists.h"
/**
 * reverse_listint - Function
 *
 * Description:  reverses a listint_t linked list
 *
 * @head: pointer to pointer of type listint_t
 *
 * Return: returns pointer for the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (!*head)
		return (0);
	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}
	(*head)->next = prev_node;
	return (*head);

}
