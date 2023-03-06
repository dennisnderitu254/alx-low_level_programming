#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print alphabet letters in reverse followed by new line
 *
 * Return: return 0
 *
 * FUNCTIONALITY *
 *
 * 1. Declare a variable called letter of type int.
 * 2. Start a for loop that will run as long as letter is greater than or equal to the ASCII value of ‘a’.
 * 3. Inside the for loop, print the value of letter.
 * 4. Decrement the value of letter by 1.
 * 5. End the for loop.
 * 6. Print a new line.
 * 7. Return 0.
 *
 * Time Complexity: O(n)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
