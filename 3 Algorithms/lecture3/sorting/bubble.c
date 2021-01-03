// sort in ascending order using the Bubble sort algorithm

#include <stdio.h>

void print_array(int length, int array[]); // moves the cursor on a new line at the end

int main(void)
{
    // const int length = 10;
    // int array[] = {6, 3, 3, 8, 5, 2, 7, 4, 1, 3};
    const int length = 13 * 8;
    int array[] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    printf("at the start the array = ");
    print_array(length, array);

    for (int i = 0; i < length; i++)
    {

        int swaps = 0;

        for(int j = 0; j < length - 1; j++)
        {
            int current = array[j];
            int next = array[j + 1];

            if (current > next) // don't do anything if the current number is smaller than or equal to the next
            {
                // if the current item is bigger than the next one, I do so that the current is the smaller one
                array[j] = next;
                array[j + 1] = current;
            }
            else
            {
                swaps++;
            }

        }

        if(swaps == length - 1)
        {
            break;
        }

        printf("on i = %i array = ", i);
        print_array(length, array);
    }

    printf("after the end the array = ");
    print_array(length, array);
}

void print_array(int length, int array[])  // moves the cursor on a new line at the end
{
    printf("[ ");
    for(int i = 0; i < length; i++)
    {
        if (i != length - 1) printf("%i, ", array[i]);
        else printf("%i", array[i]);
    }
    printf(" ]\n");  // moves the cursor on a new line at the end
}

// взимам всеки елемент на индекса и го сравнявам със следващия и ако е нужно имс меням местата и това го повтарям със всеки един елемент за да може като проверя два елемента после втория да го проверя отново

// ако не им сменя местата timesSame++; ако след вложения цикъл timeasSame == length - i => break;

// swaps/counter