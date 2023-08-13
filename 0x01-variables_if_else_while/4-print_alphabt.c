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
		putchar(alphabet = 'a');
		alphabet++;
	}
	if (alphabet == 'e' || alphabet == 'q')
	{		alphabet++;
			putchar(alphabet);
			alphabet++;
	}

		putchar('\n');
		return (0);
}
