#include "main.h"
/**
 *  _strlen_recursion -  a function that returns the length of a string.
 *  @s: character parameter
 *  Return: void
 */
int _strlen_recursion(char *s)
{
	int at = 0;

	if (*s > '\0')
	{
		at += _strlen_recursion(s + 1) + 1;
	}
	return (at);
}
