#include "holberton.h"

/**
 * sqrt_check - checks for the square root of c
 * @g:guess at sqrt
 * @x: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int g, int x)
{
	if (g * g == x)
		return (g);
	if (g * g > x)
		return (-1);
	return (sqrt_check(g + 1, x));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
