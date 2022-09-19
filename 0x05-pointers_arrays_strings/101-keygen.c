#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Description: Password generator
 * Return: 0 (success)
 */
int main(void)
{
	int pass, num;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2734)
	{
		pass = (rand() % 124);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2962 - sum);
	return (0);
}
