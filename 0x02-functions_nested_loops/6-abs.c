#include "holberton.h"
#include <stdio.h>

/**
 * int _abs - computes the absolute value of an integer
 * @r: int argument for the function
 * Return: Always 0.
 */
int _abs(int r)
{
if (r > 0 || r == 0)
{
return (r);
}
else
return (r * -1);
}
