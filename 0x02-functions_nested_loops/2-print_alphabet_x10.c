#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */
/*
1. Declare a function called print_alphabet_x10 that takes no arguments and returns no value.
2. Declare an integer variable i and initialize it to 0.
3. Declare a for loop that will run 10 times.
4. Declare a character variable c and initialize it to ‘a’.
5. Declare a for loop that will run until c is greater than ‘z’.
6. Print the character c.
7. Increment c by 1.
8. Print a new line.
9. Increment i by 1.
10. End the function.
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
