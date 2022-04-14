#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(ars);

	return (sum);
}
