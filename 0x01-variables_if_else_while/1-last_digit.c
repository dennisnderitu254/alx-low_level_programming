#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of random number
 *
 * Return: Return 0
 *
 * FUNCTIONALITY *
 *
 * 1. It’s generating a random number using the rand() function.
 *
 * 2. It’s storing the last digit of the random number in the variable last.
 *
 * 3. It’s printing the last digit of the random number.
 *
 * Time Complexity: O(1)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
