#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * each follwed by a comma and a space except the last number,
 * end with a newline.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
