#include <stdio.h>

/**
* main - Entry point
* Description: prints all lowercase alphabet except e and q
* Return:Always 0 (success)
*/
int main(void)
{
char lowerCase = 'a';

while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{
putchar(lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
