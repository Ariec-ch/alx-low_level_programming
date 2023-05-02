#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int li;

	li = *a;
	*a = *b;
	*b = li;
}
