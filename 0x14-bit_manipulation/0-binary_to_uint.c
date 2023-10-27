#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
        int i, j, dec = 0;

        for (j = 0; b[j] != '\0'; j++);

        if (b == NULL)
        {
            return (0);
        }
       else
         {
             for (i = 0; j >= 0; j--)
                {
                        if((b[j] != '1') || (b[j] != '0'))
                        {
                           return (0);
                            break;
                        }
                        if(b[j] == '1')
                        {
                                dec += pwer(i);
                        }
                        i++;
                }
         }
        return (dec);
}
