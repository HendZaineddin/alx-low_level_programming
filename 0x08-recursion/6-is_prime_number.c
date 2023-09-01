#include "main.h"
/**
 * is_prime_number -  a function that returns 1 if the input integer.
 * @n : an integer.
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
else if (n == 2 || n == 3)
return (1);
else if ((((n * n) - 1) % 24) == 0)
return (1);
else
	return (0);
}
