#include "holberton.h"
/**
 * print_alphabet - Program prints abc.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
