#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * 
 * retrun: pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
  int *memory = malloc(b);

  if(memory == NUll)
    exit(98);
  
  return memory;
}
