#include "main.h"
/**
 *print_numbers - function that prints all numbers from 0 to 9
 *
 *Return: returns nothing
 */
/*
1. Declare a variable called number and initialize it to 48.
2. Use a for loop to iterate through the numbers 48 to 57.
3. Print the current number.
4. Print a new line.
*/
void print_numbers(void)
{
int number = 48;
for (number = 48; number < 58; number++)
{
_putchar(number);
}
_putchar(10);
}

