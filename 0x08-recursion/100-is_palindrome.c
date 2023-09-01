#include "main.h"
/**
 *
 *
 */

int is_palindrome(char *s)
{
	char *r;
	int i = 0;

       r == _rev_recursion(*s);

	
	if (r[i] == s[i])
		return (1);
	else
		return (0);
	i++;
}

int _rev_recursion(char *s)
{
if (*s > '\0')
        {
	       	_rev_recursion(s + 1);
        }
}
