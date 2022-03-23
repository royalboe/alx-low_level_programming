#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer
 * @size: The size
 *
 * Return: none
 */
void print_buffer(char *b, int size)
{
	int  i, j;
	char b_str[11], b_hex[26];

	for (i = 0; i < size; i++)
	{
		b_hex[0] = '\0';
		if ((i % 10) == 0)
		{
			printf("%08x:", i);
			for (j = 0; j < 10; j++)
			{
				if ((j + i) >= size)
					if ((j % 2) == 0)
						sprintf(b_hex, "%s   ", b_hex);
					else
						sprintf(b_hex, "%s  ", b_hex);
				else
				{
					if ((j % 2) == 0)
						sprintf(b_hex, "%s %02x", b_hex, b[i + j]);
					else
						sprintf(b_hex, "%s%02x", b_hex, b[i + j]);
					b_str[j] = b[i + j] < 32 ? '.' : b[i + j];
					b_str[j + 1] = '\0';
				}
			}
			printf("%s %s", b_hex, b_str);
			printf("\n");
		}
	}
	if (size == 0)
		printf("\n");
}
