#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string.
 *
 * @accept: string to match.
 *
 * Return: pointer to the byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *c;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				c = &s[i];
				return (c);
			}
			j++;
		}
		i++;
	}
	return (0);
}
