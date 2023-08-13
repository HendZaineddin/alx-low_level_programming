#include <stdio.h>
/**
 * main - Entry point pritning
 * Description: print the alphabet in lowercase
 * Return: 0 (sucses).
 */
int main(void)
{
	char alphabet;

	while (alphabet <= 'z')
	{
	if (alphabet == 'e' || alphabet == 'q')
	{		alphabet++;
			putchar(alphabet = 'a');
			alphabet++;
	}
	}
		putchar('\n');
		return (0);
}
