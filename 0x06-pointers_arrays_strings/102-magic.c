#include <stdio.h>

/**
 * main - Modifies an array element from a pointer to a local variable
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here
	 * remeber you are not allowed to use a or modify p
	 * only one statement
	 * don't code anything else other than this line of code...
	 */
	*(p + 5) = 98;
	/* ...so that it prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
