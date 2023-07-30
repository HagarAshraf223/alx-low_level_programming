#include <stdio.h>
#include "main.h"

/**
 * _isupper - prints alphabet in uppercase.
 *
 * @c: function input.
 *
 * Return: 1  if c is uppercase. 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
