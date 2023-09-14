#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: unsigned int.
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	sum += va_arg(p, unsigned int);

	va_end(p);
	return (sum);
}
