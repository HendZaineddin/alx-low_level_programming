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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
