#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks whether alphabets character
 * @c: int
 * description - return 1 if upper or lower
 * Return: 1 if alphabet 0 otherwise
 *
 * FUNCTIONALITY *
 *
 * 1. If the character is between 97 and 122, it’s lowercase.
 * 2. If the character is between 65 and 90, it’s uppercase.
 * 3. If the character is neither of the above, it’s not a letter.
 *
 * Time Complexity: O(1)
 *
 * DOCSTRING *
 *
 * If the character is between 97 and 122 (inclusive) or between 65 and 90 (inclusive), return 1. Otherwise, return 0.

 * Args:
	c: The character to be checked.
 * Returns:
	1 if the character is a letter, 0 if not.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
