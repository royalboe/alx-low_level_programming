#include "main.h"

/**
 * _strlen_recursion - it calculates the length of a string recursively
 * and returns the length
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
