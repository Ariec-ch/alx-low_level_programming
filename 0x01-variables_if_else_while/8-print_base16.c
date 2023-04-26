#include <stdio.h>

/**
 * main -  a program that prints the digital numbers and lowercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	char o;

	for (q = '0'; q <= '9' ; q++)
		putchar(q);
	for (o = 'a' ; o <= 'f' ; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
