#include <stdio.h>
#include <stdio.h>
/**
 * main - Program to alphabet letters ecxept q and e followed by new line
 *
 * Return: return 0
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
	putchar ('\n');
	return (0);
}
