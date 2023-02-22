#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
/*
1. It’s generating a random number between 0 and 128.
2. It’s printing that number as a character.
3. It’s adding that number to a running total.
4. It’s repeating steps 1-3 until the running total is 2645.
5. It’s printing the difference between 2645 and the running total.
*/
/*
Time Complexity: O(1)
*/
int main(void)
{
	char c;

	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}

	putchar(2772 - x);
	return (0);
}
