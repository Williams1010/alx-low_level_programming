#include "main.h"

/**
 *upperband - print greater than 98
 *@n: number to start from
 *Return: void
*/
void upperband(int n)
{
while (n > 98)
{
if (n >= 100)
{
_putchar(n / 100 + 48);
_putchar((n % 100) / 10 + 48);
_putchar((n % 100) % 10 + 48);
}
else
{
_putchar((n % 100) / 10 + 48);
_putchar((n % 100) % 10 + 48);
}
_putchar(',');
_putchar(' ');
n--;
}
}
