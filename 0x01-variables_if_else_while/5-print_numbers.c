#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all single digits of base 10 followed by new line
 *
 * Return: return 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
