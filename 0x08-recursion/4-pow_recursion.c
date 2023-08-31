#include "main.h"
/**
 * _pow_recursion -  a function that returns the value of x power y.
 * @x: first value.
 * @y: second value.
 * Return: 0 or -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (1);
	else
	return (x * _pow_recursion(x, y - 1));
}
