#include <stdio.h>

/**
 * main - magic
 * Description: the program prints a[2] = 98, followed by a new line.
 * - you are not allowed to use a
 *   - you are not allowed to modify p
 *   - only one statement
 *   - you are not allowed to code anything else than this line of code
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

	*(p + 5) = 98;
	 printf("a[2] = %d\n", a[2]);
}