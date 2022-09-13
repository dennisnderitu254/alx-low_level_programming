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
	int i = 0;
	char name_putchar[] = "_putchar";

	while (i < 9)
	{
		_putchar(name_putchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
