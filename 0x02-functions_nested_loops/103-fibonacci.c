#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: ALways 0 (Success)
 *
 * FUNCTIONALITY *
 *
 * 1. We initialize the variables i, j, k, next, and sum.
 * 2. We set j to 1 and k to 2.
 * 3. We set sum to 0.
 * 4. We start a for loop that will run 33 times.
 * 5. We check if j is less than 4,000,000 and if j is even.
 * 6. If j is less than 4,000,000 and even, we add j to sum.
 * 7. We set next to j + k.
 * 8. We set j to k.
 * 9. We set k to next.
 * 10. We print the value of sum.
 * 11. We return 0.
 *
 * Time Complexity: O(n)
 */
int main(void)
{

	int i;

	unsigned long int j, k, next, sum;

	j = 1;

	k = 2;

	sum = 0;

	for (i = 1; i <= 33; ++i)

	{

		if (j < 4000000 && (j % 2) == 0)

		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
