#include <stdio.h>
/**
 * main - compute and prints the sum of all the multiples
 * of 3 or 5 below
 * Return: always 0 (Success)
 */
/*
1. Declare variables
2. Initialize variables
3. Loop through numbers 0 to 1024
4. If the number is divisible by 3, add it to sum3
5. If the number is divisible by 5, add it to sum5
6. Add sum3 and sum5 together
7. Print the result
*/
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int i;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
