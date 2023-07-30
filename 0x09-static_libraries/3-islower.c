#include "main.h"

/**
 * _islower - function to check if c is lowercase.
 *
 * @c: input of function
 *
 * Return: 1 if lowercase. 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
