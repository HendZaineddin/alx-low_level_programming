#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly.
 * @str: the string.
 * Return: s or NULL.
 */

char *_strdup(char *str)
{
int n, i;
char *s;

if (str == 0)
return (NULL);

for (n = 0; str[n] != '\0'; n++)
;

s = malloc((n + 1) * sizeof(char));
if (s == 0)
{
return (NULL);
}
else
{
for (i = 0; i < n; i++)
s[i] = str[i];
}
return (s);
}
