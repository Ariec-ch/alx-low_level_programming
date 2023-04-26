#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j, e, q;

	e = 'e';
	q = 'q';

	for (j = 'a' ; j <= 'z'; j++)
	{
		if (j != e && j != q)
		putchar(j);
	}
	putchar('\n');
	return (0);
}
