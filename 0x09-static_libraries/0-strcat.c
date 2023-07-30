#include "main.h"
#include <string.h>

/**
 * _strcat - this is a function that concatenates two strings.
 *
 * @dest: first string parameter.
 *
 * @src: second string parameter.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
