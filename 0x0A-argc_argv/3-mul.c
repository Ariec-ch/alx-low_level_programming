#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: input
 * @argv: character
 * Return: 0 success otherwise failure
 */
int main(int argc, char *argv[])
{
	int sm;

	if (argc == 3)
	{
		sm = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sm);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
