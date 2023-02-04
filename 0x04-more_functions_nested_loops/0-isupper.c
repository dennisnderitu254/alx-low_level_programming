#include "main.h"
/**
 *_isupper - function that verifies if a character is uppercase or not
 *@c: tested character
 *Return: returns 1 if it is uppercase, 0 if not
 */

/*
1. It’s checking if the character is between A and Z.
2. If it is, it returns 1.
3. If it’s not, it returns 0.
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
