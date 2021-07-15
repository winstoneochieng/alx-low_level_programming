#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **malloc_checked - allocates memory using malloc
 *@b: integer
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
