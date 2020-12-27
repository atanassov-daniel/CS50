#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long num = get_long("Card number: ");

    long currentNum = num;

    int counter  = 0;

    while(currentNum != 0 || currentNum % 10 != currentNum) {
        counter++;
        // printf("%i / 10 = %i\n", counter, (counter / 10) ); // == 0 for every number from 0 to 9
        // printf("%i modulo 10 = %i\n\n", counter, (counter % 10) ); // equal to the number
        printf("currentNum = %lu\n", currentNum);
        printf("%lu modulo 10 = %lu\n", currentNum, currentNum % 10);
        printf("%lu modulo 100 = %lu\n", currentNum, currentNum % 100);
        printf("%lu / 100 = %lu\n\n", currentNum, currentNum / 100);

        // if < 10 || > 99 => not the last two numbers
        // or if num / 100 = 0 -> it will be harder

        currentNum = currentNum / 10;
    }

    if (counter != 13 && counter != 15 && counter != 16) {
        printf("INVALID");
        return 0;
    }

    printf("counter = %i\n", counter);
    long power = (long) pow(10, counter - 2);
    printf("first two numbers -> %i\n", (int) (num / power));
    // printf("counter * 10 = %f\n", pow(10, counter - 2));
    /* long power;
    if(counter - 2 >= 0) {
        power = (long) pow(10, counter - 2);
    } */
    // printf("num modulo 10 ** counter = %li\n", power != undefined ? num / power : (long) 98754623 );
    // printf("%li", power >= 0);
}