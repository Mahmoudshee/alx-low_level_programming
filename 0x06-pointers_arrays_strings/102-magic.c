#include <stdio.h>
/**
 * main - magic
 * Description - the program prints a[2] = 98, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify
	 * - only one statement
	 * - you are not allowed to code an
	 */
	p[5] = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
}
