#include "holberton.h"

/**
 * print_last_digit - Returns the value of the last digit
 * @r: function argument
 * Return: Always 0.
 */
int print_last_digit(int r)
{
int n = r % 10; 
if (r > 0 || r == 0)
{
_putchar (n + '0');
return (n);
}
else
{
r =  r * -1;
_putchar (n + '0');
 return (n);
}
}  
