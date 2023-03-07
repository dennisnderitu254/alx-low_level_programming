#include <stdio.h>
/**
 * main - Prints all combinations of two digits with,
 * and space followed by new line
 *
 * Return: returns 0
 *
 * FUNCTONALITY *
 *
 * 1. The outer for loop is used to print the first digit of the two digit number.
 * 2. The inner for loop is used to print the second digit of the two digit number.
 * 3. The if statement is used to print the comma and space after each two digit number except the last two digit number.
 * 4. The putchar() function is used to print the digits and the comma and space.
 * 5. The continue statement is used to skip the printing of the comma and space after the last two digit number.
 * 6. The putchar('\n') function is used to print a new line after the last two digit number.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{

			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
