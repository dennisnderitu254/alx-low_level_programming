#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all single digits of base 10 followed by new line
 *
 * Return: return 0
 *
 * FUNCTIONALITY *
 *
 * 1. Declare a variable called digit of type int.
 *
 * 2. Initialize the variable digit to the character ‘0’.
 *
 * 3. While the variable digit is less than or equal to the character ‘9’, do the following:
	a. Print the value of the variable digit.
	b. Increment the variable digit by 1.

 * 4. Print a newline character.
 *
 * 5. Return 0.
 *
 * Time Complexity: O(1)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
