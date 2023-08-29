#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @needle: the substring.
 * @haystack: the string.
 * Return: pt or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
char *pt;
int i, m;

for (i = 0; haystack[i] != '\0'; i++)

for (m = 0; (haystack[i] == needle[m]) && needle[m] != '\0'; m++)
if (haystack[i] != needle[m])
{
	break;
}
else if (haystack[i] == needle[m])
{
pt = &haystack[i];
return (pt);
}

return (0);
}
