#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all single digits of base 16 followed by new line
 *
 * Return: returns 0
 *
 * FUNCTONALITY *
 *
 * 1. We declare a variable called digit and initialize it to 0.
 * 2. We start a for loop that will run as long as digit is less than or equal to 9.
 * 3. We print the value of digit.
 * 4. We increment digit by 1.
 * 5. If digit is equal to 9, we set it to a.
 * 6. We start a for loop that will run as long as digit is less than or equal to f.
 * 7. We print the value of digit.
 * 8. We increment digit by 1.
 * 9. We print a new line.
 * 10. We return 0.
 *
 * Time Complexity: O(1)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
		{
			digit = 'a';
			for (; digit <= 'f'; digit++)
			{
				putchar(digit);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
