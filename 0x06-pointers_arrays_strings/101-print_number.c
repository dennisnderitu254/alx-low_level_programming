#include "main.h"
#include <stdio.h>
/**
  * print_number - prints number with _putchar
  * @n: input number
  * Return: returns void
 **/
void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
	_putchar('-');
	number = -n;
	}

	if (number / 10 != 0)
	{
	print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
