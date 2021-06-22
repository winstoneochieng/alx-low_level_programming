#include "holberton.h"

/**
 * main - Entry point
 * int _islower - function checks if lowercase
 *   int c - variable used for in the program
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
