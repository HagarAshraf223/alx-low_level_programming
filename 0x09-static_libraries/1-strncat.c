#include "main.h"
#include <string.h>

/**
 * _strncat - this is a function that concatenates two strings.
 *
 * @dest: first string parameter.
 *
 * @src: second string parameter.
 *
 * @n: number of bytes of src string.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
