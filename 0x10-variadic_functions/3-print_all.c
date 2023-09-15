#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format:  a list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int k = 0;
	char c;
	int i;
	float f;
	char *s;
	va_list p;

	va_start(p, format);
	while (format[k] != '\0')
	{
		if (format[k] == 'c')
		{
			c = va_arg(p, int);
			printf("%c", c);
		}
		else if (format[k] == 'i')
		{
			i = va_arg(p, int);
			printf("%d", i);
		}
		else if (format[k] == 'f')
		{
			f = va_arg(p, double);
			printf("%f", f);
		}
		else if (format[k] == 's')
		{
			s = va_arg(p, char *);
			if (s == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
			 printf("%s", s);
			}
		}
		k++;
	}
	va_end(p);
	printf("\n");
}

