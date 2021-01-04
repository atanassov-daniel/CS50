#include <stdio.h>
#include "../print_array/print.h" // this has to be this way, there's a fatal error otherwise

int main(void)
{
    int array[] = {3, 5, 7, 9, 1593};
    print_array(5, array);
}

// gcc -o a b.c ../print_array/print.c