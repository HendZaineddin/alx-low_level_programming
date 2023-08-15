#include "main.h"
/**
 * _isalpha - function check lowercase.
 * @c: checks input.
 * Return: return 1 if 'c' is lowercase or uppercase otherwise always 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
