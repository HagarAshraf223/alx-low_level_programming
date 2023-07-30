#include "main.h"

/**
 * swap_int - this is a function that swap values of two int.
 *
 * @a: first int.
 *
 * @b: second int.
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
