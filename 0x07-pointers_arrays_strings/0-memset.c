#include "main.h"

/**
* _memset - Fills a block of memory
 * @s: starting address
 * @b: values
 * @n: no bytes
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
