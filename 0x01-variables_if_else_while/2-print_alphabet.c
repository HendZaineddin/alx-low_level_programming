#include <stdio.h>
 /**
  * main - Entry point pritning
  * Description: print the alphabet in lowercase
  * Return: 0 (sucses).
  */
int main(void)
{
	char alphapet;

	for (alphapet = 'a'; alphapet <= 'z'; alphapet++)
	{
		putchar(alphapet);
	}

	putchar('\n');
	return (0);
}
