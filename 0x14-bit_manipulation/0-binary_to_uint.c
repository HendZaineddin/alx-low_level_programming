#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number.
 * @b: pointer to string.
 * Return: 0 or m.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, m = 0, l, i;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] == 1 || b[i] == 0)
			{
				if (b[i] == 1)
				{
					for (l = i + 1; l > 0; l--)
					{
						k *= 2;
					}
				}
			m += k;
			return (m);
			}
			if (b[i] == 'a')
			{
				break;
				return (0);
			}
		}
	}
	return (0);
}
