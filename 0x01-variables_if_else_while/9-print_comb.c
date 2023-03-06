#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints all single digits with , and space followed by new line
 *
 * Return: return 0
 *
 * FUNCTIONALITY *
 *
 * 1. The for loop is initialized with the variable digit set to the character ‘0’.
 * 2. The for loop is tested to see if digit is less than or equal to ‘9’.
 * 3. If the test is true, the body of the loop is executed.
 * 4. The body of the loop prints the value of digit, then tests to see if digit is equal to ‘9’.
 * 5. If digit is equal to ‘9’, the continue statement is executed, which causes the loop to start over again.
 * 6. If digit is not equal to ‘9’, the program prints a comma and a space, then starts the loop over again.
 * 7. When digit is greater than ‘9’, the loop ends.
 * 8. The program prints a newline character.
 * 9. The program returns a value of 0.
 *
 * Time Complexity: O(n)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
