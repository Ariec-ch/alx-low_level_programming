#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives.
 * @argc: input
 * @argv: character
 * Return: 0success otherwise failure
 */
int main(int argc, char const *argv[])
{
	int b = 0;

	while (argc--)
	{
		printf("%s\n", argv[b]);
		b++;
	}
	return (0);
}
