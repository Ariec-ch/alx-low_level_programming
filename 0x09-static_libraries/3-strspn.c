#include "main.h"
/**
 *  _strspn -  a function that gets the length of a prefix substring.
 *  @s: character parameter
 *  @accept: caracter parameter
 *  Return: the number of bytes in the initial segment of
 *  s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, itrr;

	for (itr = 0; s[itr] != '\0'; itr++)
		{
			for (itrr = 0; accept[itrr] != s[itr]; itrr++)
			{
				if (accept[itrr] == '\0')
					return (itr);
			}
		}
	return (itr);
}
