#include "main.h"

/**
 * print_line - Prints a line of n _ character
 * @n: Long of the line
 *
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
