#include "main.h"
/**
 * print_alphabet - Prints alphabets 'a - z'
 */
/*
1. Declare a variable c of type char.
2. Initialize c to the value of ‘a’.
3. While c is less than or equal to ‘z’, do the following:
	a. Print the value of c.
	b. Increment c by 1.
4. Print a new line.
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

