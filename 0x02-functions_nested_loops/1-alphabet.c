#include "main.h"
/**
 * main -Entry point
 * Describtion: prints alphabet.
 * Return: 0.
 */

void print_alphabet(void);
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
