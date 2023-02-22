#include "main.h"
/**
 *_strlen -returns the length of a string
 *@s: string
 *Return: returns length
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
