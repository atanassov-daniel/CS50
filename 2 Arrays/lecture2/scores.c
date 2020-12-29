#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    const int TOTAL = get_int("Total number of scores: "); // ask the user how many scores there will be

    if(TOTAL == 0) return 0;

    // float scores[TOTAL]; // declare an array with the user provided length
    int scores[TOTAL]; // declare an array with the user provided length

    // prompt the user for a score
    for(int i = 0; i < TOTAL; i++)
    {
        // scores[i] = get_float("Score %i: ", i + 1); // i + 1 so that the user sees 1 for the first score instead of 0
        scores[i] = get_int("Score %i: ", i + 1); // i + 1 so that the user sees 1 for the first score instead of 0
    }

    /* for(int j = 0; j < TOTAL; j++)
    {
        // printf("Score №%i = %f\n", j, scores[j]);
        printf("Score №%i = %i\n", j, scores[j]);
    } */

    printf("Average grade = %f\n", average(TOTAL, scores));
}

// a function that will compute an average; it gets passed the length of the array and the actual array
float average(int length, int array[])
{
    long sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    float averageVal = sum / (float) length;

    return averageVal;
}