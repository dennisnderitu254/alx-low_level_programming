#include "main.h"
#include <stdio.h>
/**
 * main - Prints first 50 numbers of the fibonacci sequence
 *
 * Return: 0
 *
 * FUNCTIONALITY *
 *
 * 1. Declare variables
 * 2. Initialize variables
 * 3. Loop through the fibonacci sequence
 * 4. Print the fibonacci sequence
 *
 * Time Complexity: O(n)
 */

int main(void)
{
	int i, l;
	long n1, n2, next;

	n1 = 1;
	n2 = 2;
	l = 50;

	for (i = 0; i < l; i++)
	{
		if (i == 49)
		{
			printf("%lu", n1);
		}
		else
		{
			printf("%lu, ", n1);
			next = n1 + n2;
			n1 = n2;
			n2 = next;
		}
	}
	printf("\n");
	return (0);
}
