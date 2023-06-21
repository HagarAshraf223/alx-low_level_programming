#include <unistd.h>
#include "main.h"

/**
 * _putchar - whrite the character c to stdout
 * 0c: The character to print
 *
 * Return: on source 1.
 * on error. -1 is returned. and errno is set appropiataly. 
*/
int _putchar (char c)
{
	return (whrite(1, &c, 1));
}
