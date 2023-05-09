#include "main.h"
/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: character parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int itr, itrr;

	for (itr = 0; itr < 8; itr++)
	{
		for (itrr = 0; itrr < 8; itrr++)
			{
				_putchar(a[itr][itrr]);
			}
		_putchar('\n');
	}
}
