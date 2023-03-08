#include <stdio.h>
/**
 * main - printing combinations of two two digit numbers
 *
 * Return: Always 0 (success)
 *
 * FUNCTIONALITY *
 *
 * 1. It’s creating two variables, x and y, and initializing them to 0.
 *
 * 2. It’s creating a for loop that will run 100 times.
 *
 * 3. It’s creating a nested for loop that will run 100 times.
 *
 * 4. It’s checking if x is less than y.
 *
 * 5. If x is less than y, it’s printing the value of x and y.
 *
 * 6. It’s printing a comma and a space after each pair of numbers, except for the last pair.
 *
 * 7. It’s printing a new line after the last pair of numbers.
 *
 * Time Complexity: O(n^2)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
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
