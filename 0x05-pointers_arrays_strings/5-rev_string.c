#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 *
 * @s: string parameter.
 */

void rev_string(char *s)
{
	int i, j;
	char swp;

	j = strlen(s);
	for (i = 0; i < j / 2; i++)
	{
		swp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = swp;
	}
}
