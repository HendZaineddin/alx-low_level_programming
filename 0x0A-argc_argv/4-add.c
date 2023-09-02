#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point.
 * @argc:The size of the argv array.
 * @argv:An array of size argc.
 * Return:0 sucsess, 1 faild.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
		for (i = 1; i < argc; i++)
		{
		sum += atoi(argv[i]);
		if (!isdigit(argv[i]))
		{
		printf("Error\n");
		return (1);
		}
		}
		printf("%d\n", sum);
return (0);
}
