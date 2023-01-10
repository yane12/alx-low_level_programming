#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *s;
int i, l = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
l++;

s = malloc(sizeof(char) * (l + 1));

if (s == NULL)
return (NULL);

for (i = 0; str[i]; i++)
s[i] = str[i];

s[l] = '\0';

return (s);
}
