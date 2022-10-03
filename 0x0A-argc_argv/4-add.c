#include <stdio.h>
#include <stdlib.h>
/**
 * main - print sum of two numbers
 * @argc: number of arguments
 * @argv: array of poiters
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
