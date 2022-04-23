#include "main.h"
#include <studio.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string to search from
 * @c: the char to find
 * Return: a pointer to the first occurence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int a, len;
	for (a = 0; s[a] != '\0'; a++)
		len++;
	for (a = 0; a < len; a++)
	{
		if (s[a] == c)
			return (s);
		*s++;
	}
	return (NULL);
}
