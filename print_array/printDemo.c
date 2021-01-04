#include <stdio.h>
#include "print.h"

int main(void)
{
    int array[] = {3, 5, 7, 9, 2345};
    print_array(5, array);
}
// must be compiled with 'gcc -o test printDemo.c print.c'