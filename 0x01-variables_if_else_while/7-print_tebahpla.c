#include <stdio.h>

/**
 * main -  a program that prints the lowercase alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;

	for (u = 'z'; u >= 'a'; u--)
		putchar(u);
	putchar('\n');
	return (0);
}
