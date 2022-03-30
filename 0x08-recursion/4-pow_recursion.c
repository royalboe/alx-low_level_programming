#include "main.h"

/**
 * _pow_recursion - function returns the value of x exponents y
 * @x: integer params
 * @y: integer params
 * Return: integer
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
