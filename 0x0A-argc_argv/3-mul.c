#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc:The size of the argv array.
 * @argv:An array of size argc.
 * Return:0 sucsess, 1 faild.
 */

int main(int argc, char *argv[])
{
int mul = 0;

if (argc == 3)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
