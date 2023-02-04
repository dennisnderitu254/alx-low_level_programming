#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
/*
1. Declare the variables i, j, and k.
2. Create a for loop that will iterate through the rows of the table.
3. Create a nested for loop that will iterate through the columns of the table.
4. Multiply the row and column to get the product.
5. If the column is 0, print the product.
6. If the product is less than 10 and the column is not 0, print a comma, two spaces, and the product.
7. If the product is greater than or equal to 10, print a comma, a space, the tens digit of the product, and the ones digit of the product.
8. Print a new line after each row.
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');

			} else if (k >= 10)
			{

				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');

			}
		}
		_putchar('\n');
	}
}
