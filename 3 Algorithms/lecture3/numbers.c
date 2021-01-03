#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* int array[11] = {7, 17, 5, 6, 945, 3456, 4355, 4565, 687, 97, 8765455};
    printf("%i\n",  array[10]); */
    /* int array[] = {7, 17, 5, 6, 945, 3456, 4355, 4565, 687, 97, 8765455};
    printf("%i\n",  array[10]); */
    /*int array[11] = {7, 17, 5, 6, 945, 3456, 4355, 4565, 687, 97, 8765455};
    printf("old = %i\n",  array[10]);
    array[10] = -3;
    printf("new = %i\n",  array[10]);*/
    /* int array[] = {1, 2, 8765455}; // error
    int array[] = {1, 2, 8765455, }; // same error again
    array[3] = -100;
    printf("array[3] = %i\n",  array[3]); */

    int array[7] = {4, 6, 8, 2, 7, 5, 0};

    int searched = 7;

    bool found = false;

    for(int i = 0; i < 7; i++)
    {
        if (array[i] == searched)
        {
            found = true;
            printf("found on iteration №%i\n", i);
            // break;
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
    // printf("%s\n", found ? "true" : "false");
}