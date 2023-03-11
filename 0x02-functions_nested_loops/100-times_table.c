#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 *
 * FUNCTIONALITY *
 *
 * 1. First, we check if the number is between 0 and 15. If it is, we continue.
 * 2. We create three variables: i, j, and k. i is the row, j is the column, and k is the product of i and j.
 * 3. We create a for loop that will iterate through the rows.
 * 4. We create a nested for loop that will iterate through the columns.
 * 5. We multiply i and j and store the result in k.
 * 6. We check if j is 0. If it is, we print k.
 * 7. If k is less than 10 and j is not 0, we print a comma, three spaces, and k.
 * 8. If k is greater than or equal to 10 and less than 100, we print a comma, two spaces, and k.
 * 9. If k is greater than or equal to 100, we print a comma, one space, and k.
 * 10. We print a new line.
 * 11. We close the nested for loop.
 * 12. We close the for loop.
 * 13. We close the if statement.
 * 14. We close the function.
 *
 * Time Complexity: O(n^2)
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
