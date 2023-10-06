#include "main"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str;
    int c = 0, i;
    
    for (i=0; s1[i]; i++)
    {
        c++;
    }
    
    str = malloc(sizeof(char)+n);
    
    for(i=0; s1[i]; i++)
    {
        str[i] = s1[i];
    }
    
    i = 0;
    
    for(i=0; i < n; i++)
    {   
        str[c] = s2[i];
        c++;
    }
    
    str[c+n+1] = '\n';
    return str;
}
