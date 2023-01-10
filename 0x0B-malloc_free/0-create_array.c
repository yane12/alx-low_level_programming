#include <stdlib.h>
#include <main.h>

/**
 * *create_array - create an array of chars
 * initializes with a specifc char
 * @size: size of array created
 * @c: char to intialize the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}

p = (char *) malloc(size * sizeof(char));

if (p == NULL)
{
return (0);
}

while (i < size)
{
*(p + i) = c;
i++;
}
*(p + i) = '\0';

return (p)
}
