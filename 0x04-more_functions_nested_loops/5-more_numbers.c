#include "main.h"
/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14.
 *
 */

void more_numbers(void)
{
	int M, n;


	for (n = 0; n <= 9; n++)
	{

	for (M = 0; M <= 14; M++)
	{
	if (M > 9)
	putchar(M / 10 + '0');
	putchar(M % 10 + '0');

	}
	putchar('\n');
	}

}
