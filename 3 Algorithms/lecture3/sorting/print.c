#include <stdio.h>
#include "print.h"  /* Include the header (not strictly necessary here) */

void print(int length, int array[]) // moves the cursor on a new line at the end /* Function definition */
{
    printf("[ ");
    for(int i = 0; i < length; i++)
    {
        if (i != length - 1) printf("%i, ", array[i]);
        else printf("%i", array[i]);
    }
    printf(" ]\n");  // moves the cursor on a new line at the end
}