#include "variadic_functions.h"
/**
 * print_strings - function prints strings.
 * @separator: print separator between tow strings.
 * @n: unsigned integer.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(p, const char *);
		str = (str == NULL) ? "(nil)" : str;
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(p);
	printf("\n");
}
