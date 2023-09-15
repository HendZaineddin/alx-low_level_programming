#include "variadic_functions.h"
/**
 * print_numbers - a function prints numbers.
 * @separator: the separator between two numbers.
 * @n: unsigned integer.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(p, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
