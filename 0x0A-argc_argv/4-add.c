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
	int i, k, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (k = 0; argv[i][k] != '\0'; k++)
			{
				if (!isdigit(*argv[i][k]))
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
return (0);
}
