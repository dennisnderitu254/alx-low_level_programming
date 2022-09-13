#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints out last digit
 * @a: integer
 *
 * description : prints out the last digit of a value
 * Return: a
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -(a % 10);
	}
	else if (a > 0)
	{
		a = a % 10;
	}
	else
	{
		a = 0;
	}
	_putchar(a + '0');
	return (a);
}
