#include <stdio.h>
/**
 * main - prints all combinations of three digits with,
 * and space followed by new line
 *
 * Return: returns 0
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
