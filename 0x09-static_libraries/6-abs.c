#include "main.h"
/**
 * _abs - compute the absolute value of int
 * @c: input
 * Return: 0 or absolute numb
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
