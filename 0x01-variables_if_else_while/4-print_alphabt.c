/**
 * File: 4-print_alphabt.c
 * Auth: Winstone Ochieng
 */

#include <stdio.h>

/*
 * main - Prints the alphabet in lowercase,
 * followed by mew line
 *
 * Return: 0 is success
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
