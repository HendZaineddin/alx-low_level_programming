#include "main.h"
/**
 *
 *
 */

void print_triangle(int size)
{
int s, m;
  
   m = size;
   
   if (size < 0)
   {
       putchar('\n');
   }
   else
   for (size = 10; size > 0; size--)
   {
       
       for (s = m-size; s > 0; s --)
       {
          
           while (s == 0)
           {
           putchar(' ');
           s--;
           }
           putchar('#');
          
       }

       putchar('\n');
   }
}
