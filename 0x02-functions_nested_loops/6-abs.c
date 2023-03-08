#include <stdio.h>
#include "main.h"
/**
 * _abs - computes absolute value of a value
 * @c: integer
 * description : computes integer
 *
 * Return: int
 *
 * FUNCTIONALITY *
 *
 * 1. If the number is greater than 0, then it is positive.
 * 2. If the number is less than 0, then it is negative.
 * 3. If the number is equal to 0, then it is zero.
 *
 * Time Complexity: O(1)
 */
int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
