#include <stdio.h>

/**
 * main - Entry point
 * Description: listing numbersusing putchar
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((char)num);
	putchar('\n');
	return (0);
}
