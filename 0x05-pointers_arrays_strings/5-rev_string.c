#include "main.h"
/**
 * rev_string -  a function that reverses a string.
 * @s: input parameter
 * Return: 0 always
 */
void rev_string(char *s)
{
	int a, b;
	char li;

	for (a = 0; s[a] != '\0'; ++a)
		;

	for (b = 0; b < a / 2 ; b++)
		{
			li = s[b];
			s[b] = s[a - 1 - b];
			s[a - 1 - b] = li;
		}
}
