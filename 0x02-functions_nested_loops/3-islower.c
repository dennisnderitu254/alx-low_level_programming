#include <stdio.h>
#include "main.h"
/**
 * _islower - function name
 * @c : varable
 * description : checks if it is caselower
 *
 * Return: int
 *
 * FUNCTIONALITY *
 *
 * 1. If the character is between 97 and 122, then it is a lowercase letter.
 * 2. If the character is not between 97 and 122, then it is not a lowercase letter.
 *
 * Time Complexity: O(1)
 *
 *
 *  DOCSTRING *
 *
 * If the character is between 97 and 122, return 1, otherwise return 0.
 * Args:
	c: The character to be checked
 * Returns:
	1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
