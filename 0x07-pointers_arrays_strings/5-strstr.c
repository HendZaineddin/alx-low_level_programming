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
{
if (haystack[i] == needle[0])
{
for (m = 0; (haystack[i + m] == needle[m]) && needle[m] != '\0'; m++)
{
pt = &haystack[i];
return (pt);
}
}
}
return (0);
}
