#include "main.h"

/**
 * _isalpha - this is a function that checks for alphabetic character.
 *
 * @c: input of function
 *
 * Return: 1 if c is letter. 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
