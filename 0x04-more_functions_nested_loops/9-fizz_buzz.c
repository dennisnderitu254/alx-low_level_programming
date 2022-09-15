#include <stdio.h>
#include "main.h"
/**
 *main - program that prints either number
 *or fizz or buzz or fizzbuzz
 *
 *
 *Return: returns 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n & 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");

	return (0);
}
