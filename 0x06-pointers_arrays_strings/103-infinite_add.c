#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds to numbers in a string
 * @n1: The number
 * @n2: The number
 * @r: The result
 * @size_r: The qty
 *
 * Return: none
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char t;
	int  i, j, k, size_1, size_2, a, b, c =  0;

	size_1 = strlen(n1);
	size_2 = strlen(n2);

	if (size_1 > (size_r - 1) || size_2 > (size_r - 1))
		return (0);

	for (i = --size_1, j = --size_2, k = 0; i >= 0 || j >= 0; k++)
	{
		if (i >= 0)
			a = n1[i--] - 48;
		else
			a = 0;
		if (j >= 0)
			b = n2[j--] - 48;
		else
			b = 0;
		r[k] = (a + b + c) % 10 + 48;
		c = (a + b + c) / 10;
		if (k >= (size_r - 2))
			return (0);
	}
	if (c > 0)
		r[k++] = c + 48;
	r[k] = '\0';
	for (i = 0; i < (k / 2); i++)
	{
		t = r[i];
		r[i] = r[k - i - 1];
		r[k - i - 1] = t;
	}

	return (r);
}
