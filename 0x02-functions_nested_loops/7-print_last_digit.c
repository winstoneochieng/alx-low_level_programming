#include "holberton.h"

/**
 * print_last_digit - Returns the value of the last digit
 * @c: function argument
 * Return: Always 0.
 */
int print_last_digit(int c)
{
if (c > 0 || c == 0)
{
_putchar (c % 10 + '0');
return (c % 10);
}
else
{
c = c * -1;
_putchar (c % 10 + '0');
return (c % 10);
}
}
