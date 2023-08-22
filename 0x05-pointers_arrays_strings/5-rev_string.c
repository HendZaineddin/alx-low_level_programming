#include "main.h"
/**
 * rev_string -  a function that reverses a string.
 * @s: string.
 */

void rev_string(char *s)
{
int i, g;
char bad;

	for (i = 0; s[i] != '\0'; i++)

		for (g = 0; g < i / 2; g++)
		{
			bad = s[g];
			s[g] = s[i - g - 1];
			s[i - g - 1] = bad;
		}
}
