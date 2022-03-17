#include "main.h"

/**
 * print_square - Draws a diagonal line on the terminal
 * @size: Long of the line
 *
 * Return: none
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
