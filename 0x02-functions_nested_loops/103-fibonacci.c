#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * this is a program that prints the sum of even Fibonacci numbers.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float net;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			net += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", net);
	return (0);
}
