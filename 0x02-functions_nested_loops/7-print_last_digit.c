#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints out last digit
 * @a: integer
 *
 * description : prints out the last digit of a value
 * Return: a
 */
/*
1. If a is less than 0, then a = -(a % 10)
2. If a is greater than 0, then a = a % 10
3. If a is equal to 0, then a = 0
4. Print the last digit of a
5. Return the last digit of a
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
