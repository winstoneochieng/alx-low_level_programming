#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory to  array
 * @nmemb: elements in a  array
 * @size: size of element
 * Return: returns pointer to allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		p[x] = 0;
	return (p);
}
