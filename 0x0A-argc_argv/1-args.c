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
	if (argv[argc - 1])
	printf("%d\n", argc - 1);
	return (0);
}
