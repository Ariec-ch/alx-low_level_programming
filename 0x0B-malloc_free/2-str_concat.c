#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *str_concat - that concatenates two strings.
 * @s1: character
 * @s2: character
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, o = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	o = a + b;
	s = malloc((sizeof(char) *o) + 1);

	if (s == NULL)
		return (NULL);
	b = 0;
	while (c < o)
	{
		if (c <= a)
			s[c] = s1[c];
		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}
		c++;
	}
	s[c] = '\0';
	return (s);
}
