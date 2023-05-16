#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: input
 * @argv: character
 * Return: 0 success otherwise failure
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
