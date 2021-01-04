// sort in ascending order using the Selection sort algorithm

#include <stdio.h>
#include "../../print_array/print.h"
// on iterations i = 1 and 2 the array is the same for some reason
int main(void)
{
    const int length = 10;
    int array[] = {6, 3, 3, 8, 5, 2, 7, 4, 1, 3};
    // int array[] = {1, 6, 3, 3, 8, 5, 2, 7, 4, 3};

    // const int length = 3;
    // int array[] = {3, 3, 3};
    printf("at the start the array = ");
    print_array(length, array);

    // what do I have to do if the number is equal to the other number? move them both or ignore the second one on this iteration at least
    for(int i = 0; i < length; i++)
    {
        int smallest = 2147483647; // smallest number so far
        int index = -1; // index of the smallest number so far

        for(int j = i; j < length; j++) // find the smallest elementh between the i'th(for ex. 2) and the last
        {
            int current = array[j];

            if (current < smallest) // if the current is smaller than the smallest until now, now the current becomes the smallest in the array
            {
                smallest = current; // save the smallest number
                index = j; // save the index of the smallest element
            }

            // on the last iteration swap the smallest element with the i'th one(for ex. 0)
            if (j == length - 1)
            {
                array[index] = array[i]; // the i'th(for ex. 0) element gets on the place of the current smallest one
                array[i] = smallest; // on the i'th(for ex. 2) I put the current smallest element
            }
        }

        printf("on i = %i array = ", i);
        print_array(length, array);
    }

    printf("after the end the array = ");
    print_array(length, array);
}