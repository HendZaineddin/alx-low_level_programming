#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: The first comparison string.
 * @s2: The second comparison string.
 * Return: (*s1 - *s2)
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = s1[0] - s2[0];
			break;
		}
		else
			result = 0;
		s1++;
		s2++;
	}

return (result);
}
