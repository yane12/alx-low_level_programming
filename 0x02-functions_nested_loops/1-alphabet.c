#include "main.h"

/**
 * main - prints the alphabet
 * Return 0
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
