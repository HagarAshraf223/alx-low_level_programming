#include "main.h"
#include <string.h>

/**
 * puts_half - print half of string.
 *
 * @str: string parameter.
 */

void puts_half(char *str)
{
	int len;

	len = strlen(str);
	len++;
	for (len /= 2; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
