#include <stdio.h>

/**
 * main - prints lowercase alphabets in reversed version
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z'

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
