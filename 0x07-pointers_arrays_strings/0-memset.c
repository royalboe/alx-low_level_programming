#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @c: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area c
 */
char *_memset(char *c, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		c[i] = b;
	}

	return (c);
}
