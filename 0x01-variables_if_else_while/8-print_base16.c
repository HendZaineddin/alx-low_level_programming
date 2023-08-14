#include <stdio.h>
/**
 * main -Entry point
 * Description: print all number of base 16.
 * Return: 0.
 */
int main(void)
{
	int num;
	char lowercase;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar ('\n');
	return (0);
}
