#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowcase.
*
* Return: Always 0 (success)
*/
int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
