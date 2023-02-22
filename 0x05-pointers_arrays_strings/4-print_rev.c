#include "main.h"
/**
 * print_rev -prints a string in reverse
 * @s: string to print
 */

/*
1. Declare a function that takes a string as an argument.
2. Declare an integer variable to hold the length of the string.
3. Declare an integer variable to hold the index of the string.
4. Set the length variable to the length of the string.
5. Set the index variable to the length of the string minus 1.
6. Loop through the string starting at the last character and ending at the first character.
7. Print the character at the current index.
8. Decrement the index variable.
9. Print a new line.
*/
/*
Time Complexity: O(n)
*/
void print_rev(char *s)
{
	int len = 0, index = 0;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length
 */

/*
1. Declare a function that returns an integer and takes a pointer to a character as an argument.
2. Declare an integer variable count and initialize it to 0.
3. Declare an integer variable inc and initialize it to 0.
4. Use a for loop to iterate through the string s.
5. Increment inc by 1.
6. Return inc.
*/

/*
Time Complexity: O(n)
*/
int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
