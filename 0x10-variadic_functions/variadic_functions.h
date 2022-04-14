#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct fmt
{
	char *symbol;
	void (*p)(va_list s);

} my_fmt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _strlen_recursion(char *s);
void print_c(va_list s);
void print_i(va_list s);
void print_f(va_list s);
void print_s(va_list s);

#endif /*VARIADIC_FUNCTIONS_H*/
