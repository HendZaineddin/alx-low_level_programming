#include <stdio.h>
/**
 * main - Entry point pritning
 * Description: print the alphabet in lowercase
 * Return: 0 (sucses).
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
	}

	putchar('\n');

	return (0);
}
