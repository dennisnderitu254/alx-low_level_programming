#include <stdio.h>
#include <stdio.h>
/**
 * main - Program to alphabet letters ecxept q and e followed by new line
 *
 * Return: return 0
 *
 * FUNCTIONALITY *
 *
 * 1. The for loop is initialized with letter = 'a' and the condition is letter <= 'z'.
 *
 * 2. The loop will continue until the condition is false.
 *
 * 3. The if statement checks if letter is equal to 'q' or 'e'.
 *
 * 4. If the condition is true, the continue statement is executed and the loop
 * continues with the next iteration.
 *
 * 5. If the condition is false, the putchar function is executed and the letter is printed.
 *
 * 6. The loop continues until the condition is false.
 *
 * 7. The putchar function prints a new line.
 *
 * 8. The return statement returns 0.
 *
 * Time Complexity: O(n)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
