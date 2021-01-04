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
        int smallest = 2147483647; // smallest number so far   = 2147483647
        int index = -1; // index of the smallest number so far
        // printf("iteration %i smallest = %i\n", i, smallest);
        int timesOk = 0;
        int timesNotOk = 0;

        for(int j = i; j < length; j++) // find the smallest elementh between the i'th(for ex. 2) and the last
        {
            int current = array[j];
            // if (j == i) { smallest = current; } // on the first iteration, the smallest element is initialized to the first in the current array, because otherwise the smallest number stays with its first ever value(the smallest in the array and so no other number may be smaller and the algorithm wouldn't really work)

            if (current < smallest) // if the current is smaller than the smallest until now, now the current becomes the smallest in the array
            {
                smallest = current; // save the smallest number
                index = j; // save the index of the smallest element
                timesNotOk++;
            } else {
                timesOk++;
            }

            // on the last iteration swap the smallest element with the i'th one(for ex. 0)
            if (j == length - 1)
            {
                array[index] = array[i]; // the i'th(for ex. 0) element gets on the place of the current smallest one
                array[i] = smallest; // on the i'th(for ex. 2) I put the current smallest element
            }
        }
        // ако веднъж не е ок и това не ок е било оправено, значи няма проблем и мога да приключа
        printf("on i = %i timesOk = %i and timesNotOk = %i while length-i = %i\n", i, timesOk, timesNotOk, length - i);
        printf("on i = %i array = ", i);
        print_array(length, array);
        if(timesNotOk == length - i || timesNotOk==1)
        {
            printf("end of algorithm on i = %i because array is already sorted\n", i);
            break;
        }

        smallest = 2147483647;
    }

    printf("after the end the array = ");
    print_array(length, array);

    // проверявам на всяка итерация на вложения дали сегашния е по-голям от предишния(ако не съм променял нищо може би) и ако всеки е по-голям от предния(timesBigger == length(-i)) break;-вам

    // какво ще стане ако опитам да разменя местата на последния елемент от масива със следващия, който не е от масива
    // search through all elements and find the smallest one, put it on the first(second, ...) place and on its place put the first(second, ...) one
    // keep the smallest number and also its index for if it is indeed the smallest i'll have to get it
    // then start from the second element and repeat the same steps until we get to the last one
}