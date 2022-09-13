#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char sh[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(sh[x]);
	}
		_putchar('\n');

	return (0);
}
