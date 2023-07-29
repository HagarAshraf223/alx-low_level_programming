#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: generates random valid passwords.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	char n;
	int i;

	srand(time(NULL));
	while (i <= 2645)
	{
		n = rand() % 128;
		i += n;
		putchar(n);
	}
	putchar(2772 - i);
	return (0);
}
