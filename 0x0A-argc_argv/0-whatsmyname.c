#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc:The size of the argv array.
 * @argv:An array of size argc.
 * Return:0 sucsess.
 */

int main(int argc, char *argv[])
{
	if (argc == 1 || argc > 1)
	printf("%s\n", argv[0]);
	return (0);
}
