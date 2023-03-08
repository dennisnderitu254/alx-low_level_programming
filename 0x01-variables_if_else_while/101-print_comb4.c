#include <stdio.h>
/**
 * main - prints all combinations of three digits with,
 * and space followed by new line
 *
 * Return: returns 0
 *
 * FUNCTIONALITY *
 *
 * 1. The outermost for loop is for the hundreds digit.
 *
 * 2. The middle for loop is for the tens digit.
 *
 * 3. The innermost for loop is for the ones digit.
 *
 * 4. The if statement is to prevent the comma and space from being printed after the last number.
 *
 * 5. The putchar() function is used to print the digits.
 *
 * 6. The '0' is added to the digit to get the ASCII code for the digit.
 *
 * Time Complexity: O(n^3)
 */
int main(void)
{
	int hund;
	int tens;
	int ones;

	for (hund = 0; hund <= 9; hund++)
	{
		for (tens = hund + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hund + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hund < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
