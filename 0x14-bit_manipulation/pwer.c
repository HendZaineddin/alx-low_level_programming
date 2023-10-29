#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
int pwer( int i)
{
        int num = 1;

        if (i == 0)
                num = 1;
        else
                while (i >= 1)
                {
                        num *= 2;
                        i--;
                }
        return (num);
}
