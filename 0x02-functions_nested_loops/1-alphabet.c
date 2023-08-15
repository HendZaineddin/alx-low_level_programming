#include "main.h"
/**
 * print_alphabet - print alphabet
 * Describtion: prints alphabet.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
