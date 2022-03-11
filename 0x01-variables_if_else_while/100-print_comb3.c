#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; n <= 56; n++)
	{
		for (j = 49; m <= 57; m++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (n == 56 || m == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
