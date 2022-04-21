#include "main.h"

/**
 * _strlen - Return the qty f bytes that a string has
 * @s: The string
 *
 * Return: The long of the string as an integer number
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
