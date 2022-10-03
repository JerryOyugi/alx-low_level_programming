#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument as array of strings
 *
 * description: print the name of a proram followed by a new line
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
