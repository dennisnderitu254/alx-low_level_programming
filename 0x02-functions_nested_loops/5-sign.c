#include <stdio.h>
#include "main.h"
/**
 * print_sign - print sign of n
 * @n: int
 * description : return sign according to conditionn
 *
 * Return:+ if positive, 0 if zero and - if negative
 */
/*
1. If n is greater than 0, print + and return 1.
2. If n is less than 0, print - and return -1.
3. If n is 0, print 0 and return 0.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
