#include <stdio.h>
#include "main.h"

/**
 *main - prints largest factor.
 * Return: Always 0.
 */

/*
1. We start with a number n and a factor fp.
2. We check if n is divisible by fp. If it is, we divide n by fp and decrement fp by 1.
3. We repeat step 2 until fp is greater than n.
4. The last value of fp is the largest prime factor of n.
*/
int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);

	return (0);
}
