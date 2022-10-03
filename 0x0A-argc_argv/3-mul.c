#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argv: array of poiters
 * @argc: number of arguments
 *
 * Return: if the progran receive two arguments - 0
 *         if the program does not receive 2 arguments - 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
