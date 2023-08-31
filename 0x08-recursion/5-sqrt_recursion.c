#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square.
 * @n: the number.
 * Return: -1 or n or 0.
 */

int _sqrt_recursion(int n)
{

if (n < 0)
	return (-1);
else
	return (first_sqrt_recursion(n, 0));
}

/**
 * first_sqrt_recursion - a function that returns the natural square.
 * @n: the number.
 * @i: a parameter integer.
 * Return: -1 or i or a funcion.
 */
int first_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (first_sqrt_recursion(n, i + 1));
}
