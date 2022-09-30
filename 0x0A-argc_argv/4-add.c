#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	for (i = 1; i < agrc; i++)
	{
		for (j = 0; agrv[i] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 1; k < agrc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", sum);
	return (0);
