#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A random number is assigned to variable n
 * The last digit of the number is checked to see if it is greater than 5
 * The number, digit and the result of the evaluation is printed.
 * Return: ALways 0 (success)
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int r = n % 10;
	printf("Last digit of %d is %d ", n, r);
	if (r > 5)
		printf("and is greater than 5\n");
	else if (r == 5)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
