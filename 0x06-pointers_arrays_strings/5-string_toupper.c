#include "main.h"
/**
 *
 *
 */

char *string_toupper(char *str)
{
	int i;
	
	for (i = 0; *str != '\0'; i++)
	{
		if ('a' <= *str && *str <= 'z')
		{
			*str = (*str - 'a') + 'A';
		}
	}
	return (str);
}
