#include "main.h"

/**
 *puts2 - prints part of a string
 *@str: string to be printed
 *
 * Return: void
 **/

/*
1. Declare a function called puts2 that takes a string as an argument.
2. Declare an integer variable called i and initialize it to 0.
3. Create a while loop that will iterate through the string until it reaches the null character.
4. Inside the while loop, create an if statement that checks if the value of i is divisible by 2.
5. If the value of i is divisible by 2, print the character at the index of i.
6. Increment i by 1.
7. After the while loop, print a new line.
*/
/*
Time Complexity: O(n)
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
