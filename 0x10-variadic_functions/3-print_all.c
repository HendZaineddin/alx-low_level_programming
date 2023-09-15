#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format:  a list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int k = 0;
	char *s;
	va_list p;
	int Comma;

	va_start(p, format);
	while (format[k] != '\0' && format != NULL)
	{
		switch (format[k])
		{
		case 'c':
			printf("%c", va_arg(p, int));
			Comma = 1;
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			Comma = 1;
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			Comma = 1;
			break;
		case 's':
			s = va_arg(p, char *);
			if (s == NULL)
			printf("%s", "(nil)");
			printf("%s", s);
			Comma = 1;
			break;
			default:
			Comma = 0;
		}
		if (format[k + 1] != '\0' && Comma == 1)
			printf(", ");
		k++;
	}
	va_end(p);
	printf("\n");
}

