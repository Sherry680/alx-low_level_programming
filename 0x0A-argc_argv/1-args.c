#include <stdio.h>
/**
 * main - print the number of argumennt passed to it
 * @argc: the number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
