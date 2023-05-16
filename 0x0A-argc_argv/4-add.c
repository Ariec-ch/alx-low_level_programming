#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: input
 * @argv: character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sm = 0;
	char *b;

	while (--argc)
	{
		for (b = argv[argc]; *b; b++)
			if (*b < '0' || *b > '9')
				return (printf("Error\n"), 1);
		sm += atoi(argv[argc]);
	}
	printf("%d\n", sm);
	return (0);
}
