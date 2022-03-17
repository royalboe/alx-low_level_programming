#include "main.h"

/**
 * print_most_numbers - Prints from 0 to 9 digits exept 2 and 4
 *
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar('0' + i);
	_putchar('\n');
}
