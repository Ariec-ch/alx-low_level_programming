#include "main.h"

/**
 * *_strdup -  function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: character
 * Return: success the _strdup function returns a pointer to the duplicated string * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
        int a = 0, size = 0;
        char *m;
        
        if (str == NULL)
                return (NULL);
        for (; str[size] != '\0'; size++);
        
        /*+1 on the size puts the end of string character */
        m = malloc(size *sizeof(*str) + 1);
        
        if (m == 0)
                return (NULL);
