#include <stdio.h>
/**
 * main -Entry
 * Describtion: prints all possible different combinations of three digits.
 * Return: 0.
 */

int main(void)
{
	int i, j, l;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (l = i + 2; l <= 9; l++)

		{
				putchar(i + '0');
				putchar(j + '0');
				putchar(l + '0');

			if (i <= 6 || j < 9 || l < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
			putchar('\n');
			return (0);
}
