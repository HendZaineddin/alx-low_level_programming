#include <stdio.h>
/**
 * main -Entry point
 * Description: the lowercase alphabet in reverse.
 * Return: 0.
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
	{
		putchar(lowercase);
	}
		putchar ('\n');
		return (0);
}
