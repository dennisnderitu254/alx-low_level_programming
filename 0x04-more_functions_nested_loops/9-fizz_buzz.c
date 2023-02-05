#include <stdio.h>
/**
 *main - program that prints either number
 *or fizz or buzz or fizzbuzz
 *
 *
 *Return: returns 0
 */
/*
1. The while loop is used to iterate through the numbers from 1 to 100.
2. The if statement checks if the number is divisible by both 3 and 5. If it is, then it prints FizzBuzz.
3. The else if statement checks if the number is divisible by 3. If it is, then it prints Fizz.
4. The else if statement checks if the number is divisible by 5. If it is, then it prints Buzz.
5. The else statement prints the number.
6. The printf statement prints a new line.
7. The return statement returns 0.
*/
int main(void)
{
	int num;

	while (num++ < 100)

	if ((num % 3 == 0) && (num % 5 == 0))
	printf("FizzBuzz ");

	else if ((num % 3) == 0)
	printf("Fizz ");

	else if ((num % 5) == 0)
	{
	if (num != 100)
	printf("Buzz ");

	else
	printf("Buzz");
	}
	else
	printf("%d ", num);

	printf("\n");
	return (0);
}
