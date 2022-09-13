#include "main.h"

/**
 * print_alphabet(void) -> prints the lowercase alphabets
 * Description: print the lowercase alphabets
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

