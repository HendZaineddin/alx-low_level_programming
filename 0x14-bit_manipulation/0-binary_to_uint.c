#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number.
 * @b: pointer to string.
 * Return: 0 or m.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0, i = 0, m = 0;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] == '1' || b[i] == '0')
			{
				m = (b[i] - '0');
				k = k << 1 | m;
			}
			else
			{
				return (0);
			}
		}

		return (k);
	}
	else
	{
	return (0);
	}
}
