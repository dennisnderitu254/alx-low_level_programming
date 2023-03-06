#include <stdio.h>
#include <unistd.h>
/**
 * main - main function in the task
 *
 *
 * return: return 1
 *
 * FUNCTIONALITY *
 *
 * 1. The first line of the code is a comment.
 * Comments are ignored by the compiler.
 *
 * 2. The next line includes the standard input/output library.
 * This library contains functions such as printf, scanf, etc.
 *
 * 3. The next line is the main function. Every C program must have a main function.
 *
 * 4. The next line is a function call to printf.
 * printf is a function that prints a string to the standard output.
 *
 * 5. The next line is a return statement. Every function in C must return a value.
 *
 * 6. The last line is the end of the main function.
 *
 * Time Complexity: O(1)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
