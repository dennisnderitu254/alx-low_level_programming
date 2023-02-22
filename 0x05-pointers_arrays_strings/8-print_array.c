#include "main.h"
/**
 *print_array - print n element of array
 *@a: array
 *@n: number of elements
 *Return: nothing
 */
/*
1. It takes in an array and the size of the array.
2. It loops through the array and prints each element.
3. If the element is not the last element, it prints a comma and a space.
4. If the element is the last element, it just prints the element.
5. It prints a new line.
*/
/*
Time Complexity: O(n)
*/
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);

		else
			printf("%d", a[inc]);
	}
	printf("\n");
}
