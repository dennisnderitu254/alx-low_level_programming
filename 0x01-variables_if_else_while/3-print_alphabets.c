#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print alphabet letter in all cases followed by new line
 *
 * Return: return 0
 *
 * FUNCTIONALITY *
 *
 * 1. The for loop is used to iterate through the lowercase letters of the alphabet.
 *
 * 2. The tolower() function is used to convert the letter to lowercase.
 *
 * 3. The putchar() function is used to print the letter.
 *
 * 4. The if statement is used to check if the letter is z.
 *
 * 5. If the letter is z, then the letter is set to A.
 *
 * 6. The for loop is used to iterate through the uppercase letters of the alphabet.
 *
 * 7. The putchar() function is used to print the letter.
 *
 * 8. The break statement is used to break out of the for loop.
 *
 * 9. The putchar() function is used to print a newline.
 *
 * 10. The return statement is used to return 0.
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
		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
