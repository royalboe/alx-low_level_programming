#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int is_digit(*char s);
/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3 || is_digit(argv[1]) == 0 || is_digit(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}

/**
 * is_digit: - checks if an input contains just digits
 * @*s: arg
 * Return: true if true and false if false
 */

int is_digit(*char s)
{
	int i, n;
	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
