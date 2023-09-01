#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @needle: the substring.
 * @haystack: the string.
 * Return: pt or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
