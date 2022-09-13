#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print every minute of the day
 * starting from 00:00 to 23:59
 * @void: void
 * description: print out every minute
 *
 * Return: null
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{

		for (b = 0; b < 60; b++)
		{

			_putchar((a / 10) + '0');

			_putchar((a % 10) + '0');

			_putchar(':');

			_putchar((b / 10) + '0');

			_putchar((b % 10) + '0');

			_putchar('\n');

		}

	}

}
