#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * this is a program that prints the first 50 Fibonacci numbers.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (i = 1; i <= 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;
		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
