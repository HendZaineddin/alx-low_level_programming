#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
	_putchar('\n');
	}
}
