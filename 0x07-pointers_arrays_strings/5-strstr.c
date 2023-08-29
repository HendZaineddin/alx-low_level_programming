#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @needle: the substring.
 * @haystack: the string.
 * Return: pt or NULL.
 */

char *_strstr(char *haystack, char *needle)

	char *pt;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (g = 0; needle[g] != '\0'; g++)
		{
			if (haystack[i] != needle[g])
			{
				break;
			}
			else if (haystack[i] == needle[g])
			{
				for (m = 0; (haystack[i + m] == needle[g + m]) && needle[g + m] != '\0'; m++)
				{
					pt = &haystack[i];
				return (pt);
				}
			}
		}
	}
return (0);
}
