#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z' ; d++)
		putchar(d);
	for (d = 'A' ; d <= 'Z' ; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
