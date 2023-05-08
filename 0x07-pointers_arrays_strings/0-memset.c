#include "main.h"
/**
 * _memset -  function fills the first n bytes of the memory area pointed to
 *  by s with the constant byte b
 *  @s: character parameter
 *  @b: character parameter
 *  @n: input parameter
 *  Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
		{
			s[itr] = b;
		}

	return (s);
}
