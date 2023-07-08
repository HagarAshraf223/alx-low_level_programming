#include <stdio.h>

/**
 * main-print number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int  argc, char *argv[])
{
	int  i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
