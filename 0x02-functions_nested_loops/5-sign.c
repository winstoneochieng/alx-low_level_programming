#include "holberton.h"

/**
 * print_sign - Function checks for sign of a number
 * @n: argument used in the function
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
return 1;
_putchar('+');
}
else if (n < 0)
{
return -1;
_putchar('-');
}
else
{
return 0;
_putchar('0');
}
}  
