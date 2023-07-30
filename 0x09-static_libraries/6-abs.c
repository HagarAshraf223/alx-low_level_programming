#include "main.h"

/**
 * _abs - this is a function that computes the absolute value of an integer.
 *
 * @n: function input
 *
 * Return: 0 Always (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
