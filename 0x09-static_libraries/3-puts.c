#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string print
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
