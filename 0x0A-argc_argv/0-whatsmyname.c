#include <stdio.h>
#include "main.h"

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
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
