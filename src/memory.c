#include <stdlib.h>
#include "memory.h"

void * lsl_malloc( const size_t size)
{
   void *pointer = NULL;
   if (size > 0) 
       pointer = malloc(size);
   return pointer;
}
