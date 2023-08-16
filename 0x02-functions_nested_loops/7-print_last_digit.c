#include "main.h"
/**
 * print_last_digit - function that printf Last Digit of number.
 * @M: Write a function that prints the last digit of a number.
 * Return: Returns the value of the last digit.
 */

int print_last_digit(int M)
{
	int last_digit;

	if (M < 0)
	{
	last_digit = -1 * (M % 10);
	}
		else
		{
			last_digit = M % 10;
		}
		_putchar(last_digit + '0');
		return (last_digit);
}
