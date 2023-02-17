#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of programs
 *
 * Return: return 0
 */
/*
1. The srand() function sets its argument as the seed for a new sequence of pseudo-random integers to be returned by rand().
These sequences are repeatable by calling srand() with the same seed value. If no seed value is provided, the rand() function is automatically seeded with a value of 1.
2. The rand() function returns a pseudo-random integer in the range 0 to RAND_MAX.
3. The time() function returns the current calendar time as a value of type time_t.
4. The RAND_MAX macro expands to an integral constant expression whose value is the maximum value returned by the rand() function.
5. The if statement checks if the value of n is less than 0. If it is, the program prints “n is negative”.
6. The else if statement checks if the value of n is greater than 0. If it is, the program prints “n is positive”.
7. The else statement prints “n is zero”.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
