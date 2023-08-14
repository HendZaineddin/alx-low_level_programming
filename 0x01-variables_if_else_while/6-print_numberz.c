#include <stdio.h>
/**
 * main -Entry point
 * Description: print all number of base 10.
 * Return: 0.
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9 ;)
	{
	putchar('0' + number);
	number++;
	}
	putchar ('\n');
	return (0);
}
