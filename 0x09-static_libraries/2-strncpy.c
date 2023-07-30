#include "main.h"

/**
 * _strncpy - this is a function that copies a string.
 *
 * @dest: first string parameter.
 *
 * @src: second string parameter.
 *
 * @n: number of bytes.
 *
 * Return: the value of copy.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
