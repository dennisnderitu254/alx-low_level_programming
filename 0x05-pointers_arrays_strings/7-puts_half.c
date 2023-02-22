#include "main.h"
/**
 *puts_half - puts half of a string
 *@str: string
 *Return: void
 */

/*
1. First, we find the length of the string.
2. Then, we check if the length is even or odd.
3. If the length is even, we divide the length by 2.
4. If the length is odd, we divide the length by 2 and add 1.
5. Then, we print the string starting from the index of the length.
*/
/*
Time Complexity: O(n)
*/
void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;

	else
		len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: returns length;
 */
/*
1. Declare a function that returns an integer and takes a pointer to a character as an argument.
2. Declare an integer variable count and initialize it to 0.
3. Declare an integer variable inc and initialize it to 0.
4. Use a for loop to iterate through the string s.
5. Increment inc by 1.
6. Return inc.
*/
/*
Time Complexity: O(n)
*/
int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
