#include <stdio.h>

/**
 * main - Entry point
 *
 * @argv: arguments as arrays of strings
 * @argc: argument count
 *
 * description: prints a number of arguments passed into it
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
