#include <stdio.h>
/**
 * main - print all arguments received
 * @argc: the number of arguments suppilied to the program
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
