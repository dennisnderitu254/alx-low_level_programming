#include <stdio.h>
#include <ctype.h>
/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 * FUNCTIONALITY *
 *
 * 1. The for loop is used to iterate through the alphabet.
 *
 * 2. The tolower() function is used to convert the letter to lowercase.
 *
 * 3. The putchar() function is used to print the letter.
 *
 * 4. The putchar() function is used to print a new line.
 *
 * Time Complexity: O(n)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
