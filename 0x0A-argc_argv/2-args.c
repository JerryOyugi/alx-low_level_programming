#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: arguments as array of strings
 *
 * description: prints all arguments it receives
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
