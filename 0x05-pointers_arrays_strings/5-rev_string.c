#include "main.h"
/**
 *rev_string -Reverse a string
 *@s: String to reverse
 *Return: Nothing
 */

/*
1. First, we find the length of the string.
2. Then, we swap the first and last characters of the string.
3. Then, we swap the second and second last characters of the string.
4. We continue this process until the middle of the string is reached.
*/

/*
Time Complexity: O(n)
*/

void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;

	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: returns length;
 */

/*
1. Declare a function that returns an integer and takes a pointer to a character as an argument.
2. Declare two integers, count and inc.
3. Initialize inc to 0.
4. Loop through the string, counting the number of characters in the string.
5. Return the number of characters in the string.
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

/**
 *swap_char - swap two characters
 *@a: first character
 *@b: second character
 *Return: nothing
 */

/*
1. It’s taking two pointers to integers as arguments.
2. It’s swapping the values of the integers pointed to by the pointers.
3. It’s returning nothing.
*/
/*
Time Complexity: O(n)
*/
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
