#include <stdio.h>
/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p;

	printf("size of pointer *p: %lu\n", sizeof(p));
	return (0);
}
