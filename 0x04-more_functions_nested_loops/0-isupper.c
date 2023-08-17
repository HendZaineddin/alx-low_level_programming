#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: check the  character c.
 * Return: 1 if c is uppercase and Returns 0 otherwise.
 */

int _isupper(int c)
{

	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
