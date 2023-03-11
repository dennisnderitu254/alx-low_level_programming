#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print every minute of the day
 * starting from 00:00 to 23:59
 * @void: void
 * description: print out every minute
 *
 * Return: null
 *
 * FUNCTIONALITY *
 *
 * 1. Declare a function called jack_bauer that takes no arguments.
 * 2. Declare two integers, a and b.
 * 3. Start a for loop that runs from 0 to 23.
 * 4. Start a for loop that runs from 0 to 59.
 * 5. Print the first digit of a.
 * 6. Print the second digit of a.
 * 7. Print a colon.
 * 8. Print the first digit of b.
 * 9. Print the second digit of b.
 * 10. Print a new line.
 * 11. End the for loop.
 * 12. End the for loop.
 * 13. End the function.
 *
 * Time Complexity: O(n^2)
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
